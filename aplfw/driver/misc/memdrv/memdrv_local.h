/** 
 *  Hyper Operating System  Application Framework
 *
 * @file  memdrv_local.h
 * @brief %jp{メモリマップドファイル用デバイスドライバ ローカルヘッダファイル}
 *
 * Copyright (C) 2006-2007 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */


#ifndef __HOS__memdrv_local_h__
#define __HOS__memdrv_local_h__


#include "memdrv.h"


typedef struct c_memdrvfile
{
	C_FILEOBJ		FileObj;	/* ファイルオブジェクトを継承 */
	
	FILE_POS		FilePos;	/* ファイルポインタ */
} C_MEMDRVFILE;



#ifdef __cplusplus
extern "C" {
#endif

HANDLE    MemDrv_Open(C_DRVOBJ *pDrvObj, const char *pszPath, int iMode);
void      MemDrv_Close(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj);
FILE_ERR  MemDrv_IoControl(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj, int iFunc, void *pInBuf, FILE_SIZE InSize, const void *pOutBuf, FILE_SIZE OutSize);
FILE_POS  MemDrv_Seek(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj, FILE_POS Offset, int iOrign);
FILE_SIZE MemDrv_Read(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj, void *pBuf, FILE_SIZE Size);
FILE_SIZE MemDrv_Write(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj, const void *pData, FILE_SIZE Size);
FILE_ERR  MemDrv_Flush(C_DRVOBJ *pDrvObj, C_FILEOBJ *pFileObj);

#ifdef __cplusplus
}
#endif


#endif	/* __HOS__memdrv_local_h__ */


/* end of file */