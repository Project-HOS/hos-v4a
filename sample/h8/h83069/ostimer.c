/** 
 *  Sample program for Hyper Operating System V4 Advance
 *
 * @file  ostimer.c
 * @brief %jp{OSタイマ}%en{OS timer}
 *
 * @version $Id: ostimer.c,v 1.2 2006-11-02 10:47:09 ryuz Exp $
 *
 * Copyright (C) 1998-2006 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */


#include "kernel.h"
#include "ostimer.h"


#define OSTIMER_TIMER_INHNO		24			/**< %jp{割り込みハンドラ番号} */


#define REG_TIM16_TSTR		((volatile UB *)0xffffff60)
#define REG_TIM16_TSNC		((volatile UB *)0xffffff61)
#define REG_TIM16_TMDR		((volatile UB *)0xffffff62)
#define REG_TIM16_TOLR		((volatile UB *)0xffffff63)
#define REG_TIM16_TISRA		((volatile UB *)0xffffff64)
#define REG_TIM16_TISRB		((volatile UB *)0xffffff65)
#define REG_TIM16_TISRC		((volatile UB *)0xffffff66)

#define REG_TIM16_TCR0		((volatile UB *)0xffffff68)
#define REG_TIM16_TIOR0		((volatile UB *)0xffffff69)
#define REG_TIM16_TCNT0		((volatile UH *)0xffffff6a)
#define REG_TIM16_TCNT0H	((volatile UB *)0xffffff6a)
#define REG_TIM16_TCNT0L	((volatile UB *)0xffffff6b)
#define REG_TIM16_GRA0		((volatile UH *)0xffffff6c)
#define REG_TIM16_GRA0H		((volatile UB *)0xffffff6c)
#define REG_TIM16_GRA0L		((volatile UB *)0xffffff6d)
#define REG_TIM16_GRB0		((volatile UH *)0xffffff6e)
#define REG_TIM16_GRB0H		((volatile UB *)0xffffff6e)
#define REG_TIM16_GRB0L		((volatile UB *)0xffffff6f)


static void OsTimer_IrqHandler(void);		/**< %jp{タイマ割り込みハンドラ} */


/** %jp{OS用タイマ初期化ルーチン} */
void OsTimer_Initialize(VP_INT exinf)
{
	T_DINH dfinh;
	
	/* %jp{割り込みハンドラ定義} */
	dfinh.inthdr = (FP)OsTimer_IrqHandler;
	def_inh(OSTIMER_TIMER_INHNO, &dfinh);
	
	/* %jp{タイマ動作開始} */
	*REG_TIM16_TSTR  &= ~0x01;		/* TCNT0動作停止 */
	*REG_TIM16_TCR0   = 0x23;		/* φ/8でカウント, GRAのコンペアマッチでクリア */
	*REG_TIM16_TCNT0  = 0;			/* カウンタクリア */
	*REG_TIM16_GRA0   = 2500 - 1;	/* 10 msec のインターバル（20MHz/8 = 2.5MHz） */
	*REG_TIM16_TISRA &= ~0x01;		/* 割り込み要因クリア */
	*REG_TIM16_TISRA |= 0x10;		/* 割り込み許可 */
	*REG_TIM16_TSTR  |= 0x01;		/* TCNT0動作開始 */
}


/** %jp{タイマ割り込みハンドラ} */
void OsTimer_IrqHandler(void)
{
	/* 割り込み要因クリア */
	*REG_TIM16_TISRA &= ~0x01;		/* 割り込み要因クリア */
	
/*	Sci1_PutChar('T');	*/
	
	isig_tim();
}


/* end of file */
