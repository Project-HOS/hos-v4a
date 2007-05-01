/** 
 *  Hyper Operating System  Application Framework
 *
 * @file  scidrv.c
 * @brief %jp{PC16550用デバイスドライバ}
 *
 * Copyright (C) 2006 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */


#include "pc16550drv_local.h"


FILE_ERR  Pc16550Drv_IoControl(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj, int iFunc, void *pInBuf, FILE_SIZE InSize, const void *pOutBuf, FILE_SIZE OutSize)
{
	C_PC16550DRV	*self;
	C_CHRFILE		*pChrFile;
	
	/* upper cast */
	self     = (C_PC16550DRV *)pDrvObj;
	pChrFile = (C_CHRFILE *)pFileObj;

	return FILE_ERR_NG;
}


/* end of file */