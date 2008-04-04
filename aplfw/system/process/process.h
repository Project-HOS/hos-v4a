/** 
 *  Hyper Operating System  Application Framework
 *
 * @file  process.h
 * @brief %jp{プロセスオブジェクト}
 *
 * Copyright (C) 2006-2007 by Project HOS
 * http://sourceforge.jp/projects/hos/
 */


#ifndef __HOS__process_h__
#define __HOS__process_h__


#include "system/type/type.h"
#include "system/handle/handle.h"
#include "system/file/file.h"
#include "system/file/console.h"


/* (とりあえず適当、そのうちTSSとか真面目にやるときの為にひとまず) */
#define PROCESS_PRIORITY_IDLE		14
#define PROCESS_PRIORITY_LOW		13
#define PROCESS_PRIORITY_NORMAL		12
#define PROCESS_PRIORITY_HIGH		11


#define PROCESS_ERR_OK				0
#define PROCESS_ERR_NG				(-1)

typedef int		PROCESS_ERR;


/* プロセス生成情報 */
typedef struct t_process_create_inf
{
	const char	*pszCommandLine;					/**< コマンドライン */
	const char	*pszCurrentDir;						/**< 起動ディレクトリ */
	int			(*pfncEntry)(VPARAM Param);			/**< 起動アドレス */
	VPARAM		Param;								/**< ユーザーパラメータ */
	MEMSIZE		StackSize;							/**< スタックサイズ */
	int			Priority;							/**< プロセス優先度 */
	HANDLE		hTerminal;							/**< ターミナル */
	HANDLE		hConsole;							/**< コンソール */
	HANDLE		hStdIn;								/**< 標準入力 */
	HANDLE		hStdOut;							/**< 標準出力 */
	HANDLE		hStdErr;							/**< 標準エラー出力 */
} T_PROCESS_CREATE_INF;


#ifdef __cplusplus
extern "C" {
#endif

HANDLE        Process_Create(const T_PROCESS_CREATE_INF *pInf);							/**< プロセス生成 */
void          Process_Delete(HANDLE hProcess);											/**< プロセス削除 */

HANDLE        Process_GetCurrentHandle(void);											/**< 現在のプロセスハンドル取得 */	
void          Process_Exit(int iExitCode);												/**< 現在のプロセスを終了させる */

int           Process_IsExit(HANDLE hProcess);											/**< プロセスの終了を確認 */
int           Process_WaitExit(HANDLE hProcess);										/**< プロセスの終了を待つ */
int           Process_GetExitCode(HANDLE hProcess);										/**< プロセスの終了コード取得 */

PROCESS_ERR   Process_EnterSystemMode(void);											/**< システムモードに入る */
void          Process_LeaveSystemMode(void);											/**< システムモードを出る */
int           Process_IsSystemMode(void);												/**< システムモードかどうか問い合わせ */

const char    *Process_GetCommandLine(HANDLE hProcess);									/**< コマンドラインの取得 */	
unsigned long Process_GetExecutionTime(HANDLE hProcess, unsigned long *pulNanosecond);	/**< 実行時間の取得 */	
HANDLE        Process_GetParentProcess(HANDLE hProcess);								/**< 親プロセスの取得 */

void          Process_SetParam(HANDLE hProcess, VPARAM Param);							/**< プロセス固有情報の設定 */
VPARAM        Process_GetParam(HANDLE hProcess);										/**< プロセス固有情報の取得 */

int           Process_SetCurrentDir(HANDLE hProcess, const char *pszPath);				/**< プロセスのカレントディレクトリ設定 */
const char    *Process_GetCurrentDir(HANDLE hProcess);									/**< プロセスのカレントディレクトリ取得 */

void          Process_SetTerminal(HANDLE hProcess, HANDLE hFile);						/**< プロセスの標準ターミナル設定 */
HANDLE        Process_GetTerminal(HANDLE hProcess);										/**< プロセスの標準ターミナル取得 */
void          Process_SetConsole(HANDLE hProcess, HANDLE hFile);						/**< プロセスの標準コンソール設定 */
HANDLE        Process_GetConsole(HANDLE hProcess);				 						/**< プロセスの標準コンソール取得 */
void          Process_SetStdIn(HANDLE hProcess, HANDLE hFile);							/**< プロセスの標準入力設定 */
HANDLE        Process_GetStdIn(HANDLE hProcess);			   							/**< プロセスの標準入力取得 */
void          Process_SetStdOut(HANDLE hProcess, HANDLE hFile);							/**< プロセスの標準出力設定 */
HANDLE        Process_GetStdOut(HANDLE hProcess);										/**< プロセスの標準出力取得 */
void          Process_SetStdErr(HANDLE hProcess, HANDLE hFile);							/**< プロセスの標準エラー出力設定 */
HANDLE        Process_GetStdErr(HANDLE hProcess);										/**< プロセスの標準エラー出力取得 */

#ifdef __cplusplus
}
#endif


#endif	/* __HOS__process_h__ */


/* end of file */
