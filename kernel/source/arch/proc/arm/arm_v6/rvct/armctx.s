; --------------------------------------------------------------------------- 
;  Hyper Operating System V4 Advance
;
; @file  dsp_tsk.c
; @brief %en{コンテキスト制御(ARM v6 アーキテクチャ)}%jp{ARM v6}
;
; Copyright (C) 1998-2006 by Project HOS
; http://sourceforge.jp/projects/hos/
; --------------------------------------------------------------------------- 


				
				EXPORT	_kernel_ena_int				; 割り込み許可
				EXPORT	_kernel_dis_int				; 割り込み禁止
				EXPORT	_kernel_wai_int				; CPUのアイドル処理
				EXPORT	_kernel_cre_ctx				; 実行コンテキストの作成
				EXPORT	_kernel_sta_ctx				; 実行コンテキストの開始
				EXPORT	_kernel_rst_ctx				; 実行コンテキストのリスタート
				EXPORT	_kernel_swi_ctx				; 実行コンテキストの切替
				


				PRESERVE8
				AREA	code, CODE, READONLY

				ALIGN
				CODE32

; -----------------------------------------------
;  割り込み許可
;  void _kernel_ena_int(void)
; -----------------------------------------------
_kernel_ena_int
				cpsie	i							; 割り込み許可
				bx		lr							; リターン


; -----------------------------------------------
;  割り込み禁止
;  void _kernel_dis_int(void)
; -----------------------------------------------
_kernel_dis_int
				cpsid	fi							; 割り込み禁止
				bx		lr							; リターン


; -----------------------------------------------
;  割り込み待ち(CPUのアイドル処理)
;  void 	_kernel_wai_int(void);
; -----------------------------------------------
_kernel_wai_int
				mov 	r0, #0
;				mcr		p15, 0, r0, c7, c0, 4		; WaitForInterrupt
				b		_kernel_wai_int



				CODE16

; -----------------------------------------------
;  実行コンテキストの作成
;  void _kernel_cre_ctx(
;			_KERNEL_T_CTXCB *pk_ctxcb,			/* r0   :作成するコンテキスト */
;			VP             isp,					/* r1   :スタックポインタ */
;			FP             entry,				/* r2   :実行アドレス */
;			VP_INT         par1,				/* r3   :実行時パラメータ */
;			VP_INT         par2)				/* sp[0]:実行時パラメータ */
; -----------------------------------------------
_kernel_cre_ctx
				sub		r1, #36						; スタックを確保
				str		r2, [r1, #0]				; r4 部分にentryを設定
				str		r3, [r1, #4]				; r5 部分にpar1を設定
				ldr		r2, [sp, #0]				; par2を取り出し
				str		r2, [r1, #8]				; r6 部分にpar2を設定
				adr		r2, ctx_entry				; エントリーアドレス設定
				add		r2, #1						; Thumbモードアドレスとして設定
				str		r2, [r1, #32]				; lr 部分にエントリーアドレスを設定
				str		r1, [r0]					; ctxcb に新 sp を保存
				bx		lr							; リターン


; -----------------------------------------------
;  実行コンテキストエントリーアドレス
; -----------------------------------------------
ctx_entry	
				mov		r0, r5						; par1を設定
				mov		r1, r6						; par2を設定
				bx		r4							; entry を実行


; -----------------------------------------------
;  実行コンテキストのリスタート
;  void _kernel_rst_ctx(
;			VP_INT         par1,				/* r0   :実行時パラメータ */
;			VP_INT         par2,				/* r1   :実行時パラメータ */
;			FP             entry,				/* r2   :実行アドレス */
;			VP             isp)					/* r3   :スタックポインタ */
; -----------------------------------------------
_kernel_rst_ctx
				mov		sp, r3						; スタックを初期値にリセット
				bx		r2							; エントリーアドレスから再開始



				ALIGN
				CODE32

; -----------------------------------------------
;  実行コンテキストの切替
;  void _kernel_swi_ctx(
;			_KERNEL_T_CTXCB *pk_ctxinf_nxt,		/* r0 : 現在のコンテキストの保存先 */
;			_KERNEL_T_CTXCB *pk_ctxinf_now)		/* r1 : 切り替えるコンテキスト */
; -----------------------------------------------
_kernel_swi_ctx
				stmfd	sp!, {r4-r11, lr}			; レジスタ保存
				str		sp, [r1]					; スタックポインタ保存
			; ---- そのまま _kernel_sta_ctx に続ける


; -----------------------------------------------
;  実行コンテキストの開始
;  void _kernel_sta_ctx(
;			_KERNEL_T_CTXCB *pk_ctxcb)			/* r0: 実行を開始するコンテキスト */
; -----------------------------------------------
_kernel_sta_ctx
				ldr		sp, [r0]					; スタックポインタ復帰
				ldmfd	sp!, {r4-r11, pc}			; レジスタ復帰

				
				END



; --------------------------------------------------------------------------- 
;  End of file
; --------------------------------------------------------------------------- 
