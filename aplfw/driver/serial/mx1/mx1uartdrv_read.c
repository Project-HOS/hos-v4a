/** 
 *  Hyper Operating System  Application Framework
 *
 * @file  mx1uartdrv_read.c
 * @brief %jp{Freescale MX1 UART用デバイスドライバ}
 *
 * Copyright (C) 2006-2007 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */


#include "mx1uartdrv_local.h"


/** %jp{受信} */
FILE_SIZE Mx1UartDrv_Read(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj, void *pBuf, FILE_SIZE Size)
{
	C_MX1UARTDRV	*self;
	C_CHRFILE		*pFile;
	unsigned char	*pubBuf;
	FILE_SIZE		i;
	int				c;
	
	/* upper cast */
	self  = (C_MX1UARTDRV *)pDrvObj;
	pFile = (C_CHRFILE *)pFileObj;

	pubBuf = (unsigned char *)pBuf;

	/* クリティカルセクションに入る */
	SysMtx_Lock(self->hMtxRecv);
	
	/* 読み出しシグナルを一旦クリア */
	ChrDrv_ClearReadSignal(&self->ChrDrv);
	
	for ( i = 0; i < Size; i++ )
	{
		/* 読み出し */
		while ( (c = StreamBuf_RecvChar(&self->StmBufRecv)) < 0 )
		{
			/* 受信を待つ */
			if ( ChrDrv_WaitReadSignal(&self->ChrDrv, pFile) != FILE_ERR_OK )
			{
				SysMtx_Unlock(self->hMtxRecv);	/* クリティカルセクションを出る */
				return i;
			}
			
			/* 読み出しシグナルをクリアしてリトライ */
			ChrDrv_ClearReadSignal(&self->ChrDrv);
		}
		
		/* 読み出せた文字を格納 */	
		*pubBuf++ = (unsigned char)c;
	}
	
	/* クリティカルセクションを出る */
	SysMtx_Unlock(self->hMtxRecv);

	return i;
}


/* end of file */
