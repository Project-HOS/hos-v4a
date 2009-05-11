/** 
 *  Hyper Operating System  Application Framework
 *
 * @file  assoc.c
 * @brief %jp{連想配列クラス}
 *
 * Copyright (C) 2006-2009 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */

#include <stdio.h>
#include <string.h>
#include "hosaplfw.h"
#include "assoc.h"



static void *Assoc_GetNode(C_ASSOC *self, T_ASSOC_NODE *pNode, const char *pszKey)
{
	char	*pszNodeKey;
	int		iCmp;
	int		iKeyLen;
	
	pszNodeKey   = (char *)pNode + sizeof(T_ASSOC_NODE);
	iCmp = strcmp(pszNodeKey, pszKey);
	if ( iCmp == 0 )
	{
		iKeyLen = MemHeap_AlignSize(self->pMemHeap, strlen(pszKey) + 1);
		return (void *)(pszNodeKey + iKeyLen);	/* ヒット */
	}
	
	if ( iCmp > 0 )
	{
		if ( pNode->pLeft == NULL )
		{
			return NULL;
		}
		return Assoc_GetNode(self, pNode->pLeft, pszKey);
	}
	else
	{
		if ( pNode->pRight == NULL )
		{
			return NULL;
		}
		return Assoc_GetNode(self, pNode->pRight, pszKey);
	}
}


/* データの参照 */
const void *Assoc_Get(C_ASSOC *self, const char *pszKey)
{
	if ( self->pRoot == NULL )
	{
		return ASSOC_POS_NULL;
	}
	
	return Assoc_GetNode(self, self->pRoot, pszKey);
}



/* end of file */