/** 
 *  Hyper Operating System V4 Advance
 *
 * @file  trcv_dtq.c
 * @brief %jp{データキューからの受信(タイムアウトあり)}%en{Receive from Data Queue(with Timeout)}
 *
 * Copyright (C) 1998-2006 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */



#include "core/core.h"
#include "object/dtqobj.h"



#if _KERNEL_SPT_TRCV_DTQ


/** %jp{データキュー資源の獲得(タイムアウトあり)}%en{Acquire Data queue Resource(with Timeout)}
 * @param  dtqid    %jp{資源獲得対象のデータキューID番号}%en{ID number of the data queue from which resource is acquired}
 * @param  tmout    %jp{タイムアウト指定}%en{Specified timeout}
 * @retval E_OK     %jp{正常終了}%en{Normal completion}
 * @retval E_ID     %jp{不正ID番号(dtqidが不正あるいは使用できない)}%en{Invalid ID number(dtqid is invalid or unusable)}
 * @retval E_CTX    %jp{コンテキストエラー}%en{Context error}
 * @retval E_NOEXS  %jp{オブジェクト未生成(対象データキューが未登録)}%en{Non-existant object(specified data queue is not registerd)}
 * @retval E_RLWAI  %jp{待ち状態の強制解除(待ち状態の間にrel_waiを受付)}%en{Forced release from waiting(accept rel_wai while waiting)}
 * @retval E_TMOUT  %jp{タイムアウト}%en{Timeout}
 * @retval E_DLT    %jp{待ちオブジェクトの削除(待ち状態の間に対象データキューが削除)}%en{Waiting object deleted(data queue is deleted waiting)}
 */
ER trcv_dtq(ID dtqid, TMO tmout)
{
	return _kernel_rcv_dtq(dtqid, tmout);
}


#else	/* _KERNEL_SPT_TRCV_DTQ */


#if _KERNEL_SPT_TRCV_DTQ_E_NOSPT

/** %jp{データキュー資源の獲得(タイムアウトあり)}%en{Acquire Data queue Resource(with Timeout)}
 * @param  dtqid    %jp{資源獲得対象のデータキューID番号}%en{ID number of the data queue from which resource is acquired}
 * @retval E_NOSPT  %jp{未サポート機能}%en{Unsupported function}
 */
ER trcv_dtq(ID dtqid, TMO tmout)
{
	return E_NOSPT;
}

#endif


#endif	/* _KERNEL_SPT_TRCV_DTQ */



#if _KERNEL_SPT_KRCV_DTQ


/** %jp{データキュー資源の獲得(統合版)}%en{Acquire Data queue Resource}
 * @param  dtqid    %jp{資源獲得対象のデータキューID番号}%en{ID number of the data queue from which resource is acquired}
 * @param  tmout    %jp{タイムアウト指定}%en{Specified timeout}
 * @retval E_OK     %jp{正常終了}%en{Normal completion}
 * @retval E_ID     %jp{不正ID番号(dtqidが不正あるいは使用できない)}%en{Invalid ID number(dtqid is invalid or unusable)}
 * @retval E_CTX    %jp{コンテキストエラー}%en{Context error}
 * @retval E_NOEXS  %jp{オブジェクト未生成(対象データキューが未登録)}%en{Non-existant object(specified data queue is not registerd)}
 * @retval E_RLWAI  %jp{待ち状態の強制解除(待ち状態の間にrel_waiを受付)}%en{Forced release from waiting(accept rel_wai while waiting)}
 * @retval E_TMOUT  %jp{タイムアウト}%en{Timeout}
 * @retval E_DLT    %jp{待ちオブジェクトの削除(待ち状態の間に対象データキューが削除)}%en{Waiting object deleted(data queue is deleted waiting)}
 */
ER _kernel_rcv_dtq(ID dtqid, TMO tmout)
{
	_KERNEL_T_DTQCB_PTR  dtqcb;
	_KERNEL_T_TSKHDL     tskhdl;
	_KERNEL_T_TCB        *tcb;
	_KERNEL_DTQ_T_DTQCNT dtqcnt;
	ER                   ercd;

	/* %jp{コンテキストチェック} */
#if _KERNEL_SPT_KWAI_DTQ_E_CTX
	if ( tmout != TMO_POL && _KERNEL_SYS_SNS_DPN() )
	{
		return E_CTX;			/* %jp{コンテキストエラー}%en{Context error} */
	}
#endif

	/* %jp{ID のチェック} */
#if _KERNEL_SPT_KWAI_DTQ_E_ID
	if ( !_KERNEL_DTQ_CHECK_DTQID(dtqid) )
	{
		return E_ID;	/* %jp{不正ID番号}%en{Invalid ID number} */
	}
#endif
		
	_KERNEL_ENTER_SVC();		/* %jp{サービスコールに入る}%en{enter service-call} */
	
	/* %jp{オブジェクト存在チェック} */
#if _KERNEL_SPT_KWAI_DTQ_E_NOEXS
	if ( !_KERNEL_DTQ_CHECK_EXS(dtqid) )
	{
		_KERNEL_LEAVE_SVC();	/* %jp{サービスコールから出る}%en{leave service-call} */
		return E_NOEXS;			/* %jp{オブジェクト未生成}%en{Non-existant object} */
	}
#endif

	/* %jp{コントロールブロック取得} */
	dtqcb = _KERNEL_DTQ_ID2DTQCB(dtqid);
	
	/* %jp{送信待ち行列先頭からタスク取り出し} */
	tskhdl = _KERNEL_DTQ_RMH_SQUE(dtqcb);
	if ( tskhdl != _KERNEL_TSKHDL_NULL )
	{
		/* %jp{待ちタスクがあれば待ち解除} */
		tcb = _KERNEL_TSK_TSKHDL2TCB(tskhdl);		/* %jp{TCB取得} */
		
		/* %jp{送信データ取得} */
		*p_data = (VP_INT)_KERNEL_TSK_GET_DATA(tcb);
		
		/* %jp{タスクを起す} */
		_KERNEL_TSK_SET_ERCD(tcb, E_OK);	/* %jp{エラーコード設定} */
		_KERNEL_DSP_WUP_TSK(tskhdl);		/* %jp{タスクの待ち解除} */
		_KERNEL_DTQ_RMV_STOQ(tskhdl);		/* %jp{タイムアウトキューからはずす} */
		
		/* %jp{タスクディスパッチの実行} */
		_KERNEL_DSP_TSK();

		ercd = E_OK;	/* %jp{正常終了}%en{Normal completion} */
	}
	else
	{
		const _KERNEL_T_DTQCB_RO *dtqcb_ro;
		_KERNEL_DTQ_T_DTQCNT     sdtqcnt;
		VP_INT		             *dtq;
		
		/* %jp{RO部取得} */
		dtqcb_ro = _KERNEL_DTQ_GET_DTQCB_RO(dtqid, dtqcb);

		/* %jp{データキュー情報取得} */
		sdtqcnt = _KERNEL_DTQ_GET_SDTQCNT(dtqcb);
		dtq     = _KERNEL_DTQ_GET_DTQ(dtqcb_ro);

		if ( sdtqcnt > 0 )		/* %jp{キューにデータはあるか？} */
		{
			_KERNEL_DTQ_T_DTQCNT head;
			_KERNEL_DTQ_T_DTQCNT dtqcnt;

			/* %jp{キューからデータを取り出し} */
			head   = _KERNEL_DTQ_GET_HEAD(dtqcb);
			dtqcnt = _KERNEL_DTQ_GET_DTQCNT(dtqcb_ro);
			*p_data = dtq[head];
			
			/* %jp{データ個数を減ずる} */
			sdtqcnt--;
			_KERNEL_DTQ_SET_SDTQCNT(dtqcb, sdtqcnt);

			/* %jp{先頭位置をずらす} */
			if ( head + 1 < dtqcnt )
			{
				head++;
			}
			else
			{
				head = 0;
			}
			_KERNEL_DTQ_SET_HEAD(dtqcb, head);

			ercd = E_OK;	/* %jp{正常終了}%en{Normal completion} */
		}
		else
		{
			if ( tmout == TMO_POL )
			{
				ercd = E_TMOUT;  /* %jp{タイムアウト}%en{Timeout} */
			}
			else
			{
				/* %jp{実行中タスクを取得} */
				tskhdl = _KERNEL_SYS_GET_RUNTSK();			/* %jp{タスクハンドル取得} */
				tcb    = _KERNEL_TSK_TSKHDL2TCB(tskhdl);	/* %jp{TCB取得} */
				
				/* %jp{受信データ格納アドレス設定} */
				_KERNEL_TSK_SET_DATA(tcb, (VP_INT)p_data);
				
				/* %jp{タスクを待ち状態にする} */
				_KERNEL_TSK_SET_TSKWAIT(tcb, _KERNEL_TTW_RDTQ);		/* %jp{待ち要因設定} */
				_KERNEL_TSK_SET_WOBJID(tcb, dtqid);					/* %jp{待ちオブジェクトID設定} */
				_KERNEL_DSP_WAI_TSK(tskhdl);						/* %jp{待ち状態に設定} */
				_KERNEL_DTQ_ADD_RQUE(dtqcb, dtqcb_ro, tskhdl);		/* %jp{待ち行列に追加} */

#if _KERNEL_SPT_TWAI_DTQ
				if ( tmout != TMO_FEVR )
				{
					_KERNEL_DTQ_ADD_TOQ(tskhdl, tmout);				/* %jp{タイムアウトキューに追加} */
				}
#endif
			
				/* %jp{タスクディスパッチの実行} */
				_KERNEL_DSP_TSK();

				/* %jp{エラーコードの取得} */
				ercd = _KERNEL_TSK_GET_ERCD(tcb);
			}
		}
	}
	
	_KERNEL_LEAVE_SVC();	/* %jp{サービスコールから出る}%en{leave service-call} */
	
	return ercd;
}



#endif	/* _KERNEL_SPT_KRCV_DTQ */



/* end of file */
