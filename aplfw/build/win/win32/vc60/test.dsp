# Microsoft Developer Studio Project File - Name="test" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** �Խ����ʤ��Ǥ������� **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=test - Win32 Debug
!MESSAGE �����ͭ���ʎҎ����̎����٤ǤϤ���ޤ��� ���Ύ̎ߎێ��ގ����Ĥ�ˎގَĎޤ��뤿��ˤ� NMAKE ����Ѥ��Ƥ���������
!MESSAGE [�Ҏ����̎����٤Ύ������Ύߎ���] ���ώݎĎޤ���Ѥ��Ƽ¹Ԥ��Ƥ�������
!MESSAGE 
!MESSAGE NMAKE /f "test.mak".
!MESSAGE 
!MESSAGE NMAKE �μ¹Ի��˹��������Ǥ��ޤ�
!MESSAGE ���ώݎĎ� �׎��ݾ�ǎώ��ۤ������������ޤ�����:
!MESSAGE 
!MESSAGE NMAKE /f "test.mak" CFG="test - Win32 Debug"
!MESSAGE 
!MESSAGE �����ǽ�ʎˎގَĎ� �ӎ��Ď�:
!MESSAGE 
!MESSAGE "test - Win32 Release" ("Win32 (x86) Console Application" ��)
!MESSAGE "test - Win32 Debug" ("Win32 (x86) Console Application" ��)
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "test - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I "../../../../kernel/include" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x411 /d "NDEBUG"
# ADD RSC /l 0x411 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "test - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../../../kernel/include" /I "../../../.." /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD BASE RSC /l 0x411 /d "_DEBUG"
# ADD RSC /l 0x411 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib winmm.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "test - Win32 Release"
# Name "test - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\kernel_cfg.c
# End Source File
# Begin Source File

SOURCE=..\main.c
# End Source File
# Begin Source File

SOURCE=..\ostimer.c
# End Source File
# Begin Source File

SOURCE=..\sample.c
# End Source File
# Begin Source File

SOURCE=..\wintimer.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\kernel_id.h
# End Source File
# Begin Source File

SOURCE=..\ostimer.h
# End Source File
# Begin Source File

SOURCE=..\sample.h
# End Source File
# Begin Source File

SOURCE=..\wintimer.h
# End Source File
# End Group
# Begin Group "system"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\system\command.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\file.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\file.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\handle.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\handle.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\memory.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\memory.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\mutex.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\process.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\shell.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\sysapi.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\sysapi.h
# End Source File
# End Group
# Begin Group "driver"

# PROP Default_Filter ""
# Begin Group "sci"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\driver\renesas\scidrv.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\renesas\scidrv.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\renesas\scifile.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\renesas\scifile.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\renesas\scihal.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\renesas\scihal.h
# End Source File
# End Group
# Begin Group "ne2000"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ethermac.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ethermac.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000drv.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000drv.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000hal.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000hal.h
# End Source File
# End Group
# End Group
# Begin Group "library"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\library\mempol.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\library\mempol.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\library\stmbuf.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\library\stmbuf.h
# End Source File
# End Group
# End Target
# End Project
