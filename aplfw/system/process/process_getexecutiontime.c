/** 
 *  Hyper Operating System  Application Framework
 *
 * @file  process.c
 * @brief %jp{プロセスオブジェクト}
 *
 * Copyright (C) 2006-2007 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */



#include <string.h>
#include "process_local.h"


/** 実行時間の取得 */	
unsigned long Process_GetExecutionTime(HANDLE hProcess, unsigned long *pulNanosecond)
{
	C_PROCESS		*self;
	SYSTIM_CPUTIME	CpuTime;
	
	/* 指定が無ければ現在のプロセスとする */
	if ( hProcess == HANDLE_NULL )
	{
		hProcess = Process_GetCurrentHandle();
	}
	
	/* ハンドルをキャスト */
	self = (C_PROCESS *)hProcess;
	
	CpuTime = SysPrc_GetExecTime(self->hPrc);
	
	/* ナノ秒単位を格納 */
	if ( pulNanosecond != NULL )
	{
		*pulNanosecond = SysTim_CpuTimeToNanosecond(CpuTime);
	}
	
	return SysTim_CpuTimeToMillisecond(CpuTime);
}


/* end of file */
