# Microsoft Developer Studio Project File - Name="hosaplfw" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** �Խ����ʤ��Ǥ������� **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=hosaplfw - Win32 Debug
!MESSAGE �����ͭ���ʎҎ����̎����٤ǤϤ���ޤ��� ���Ύ̎ߎێ��ގ����Ĥ�ˎގَĎޤ��뤿��ˤ� NMAKE ����Ѥ��Ƥ���������
!MESSAGE [�Ҏ����̎����٤Ύ������Ύߎ���] ���ώݎĎޤ���Ѥ��Ƽ¹Ԥ��Ƥ�������
!MESSAGE 
!MESSAGE NMAKE /f "hosaplfw.mak".
!MESSAGE 
!MESSAGE NMAKE �μ¹Ի��˹��������Ǥ��ޤ�
!MESSAGE ���ώݎĎ� �׎��ݾ�ǎώ��ۤ������������ޤ�����:
!MESSAGE 
!MESSAGE NMAKE /f "hosaplfw.mak" CFG="hosaplfw - Win32 Debug"
!MESSAGE 
!MESSAGE �����ǽ�ʎˎގَĎ� �ӎ��Ď�:
!MESSAGE 
!MESSAGE "hosaplfw - Win32 Release" ("Win32 (x86) Static Library" ��)
!MESSAGE "hosaplfw - Win32 Debug" ("Win32 (x86) Static Library" ��)
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "hosaplfw - Win32 Release"

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
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I "../../../.." /I "../../../../../kernel/include" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x411 /d "NDEBUG"
# ADD RSC /l 0x411 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ELSEIF  "$(CFG)" == "hosaplfw - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../../.." /I "../../../../../kernel/include" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x411 /d "_DEBUG"
# ADD RSC /l 0x411 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ENDIF 

# Begin Target

# Name "hosaplfw - Win32 Release"
# Name "hosaplfw - Win32 Debug"
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
# Begin Group "driver"

# PROP Default_Filter ""
# Begin Group "serial"

# PROP Default_Filter ""
# Begin Group "panasonic"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\driver\serial\panasonic\scdrv.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\panasonic\scdrv.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\panasonic\scfile.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\panasonic\scfile.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\panasonic\schal.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\panasonic\schal.h
# End Source File
# End Group
# Begin Group "renesus"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\driver\serial\renesas\scidrv.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\renesas\scidrv.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\renesas\scifile.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\renesas\scifile.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\renesas\scihal.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\serial\renesas\scihal.h
# End Source File
# End Group
# End Group
# Begin Group "ether"

# PROP Default_Filter ""
# Begin Group "ne2000"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000\ne2000drv.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000\ne2000drv.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000\ne2000hal.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\driver\ether\ne2000\ne2000hal.h
# End Source File
# End Group
# End Group
# End Group
# Begin Group "system"

# PROP Default_Filter ""
# Begin Group "command"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\system\command\command.h
# End Source File
# End Group
# Begin Group "sysapi"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\system\sysapi\sysapi.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\sysapi\sysapi.h
# End Source File
# End Group
# Begin Group "file"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\system\file\file.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\file\file.h
# End Source File
# End Group
# Begin Group "memory"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\..\system\memory\memory.c
# End Source File
# Begin Source File

SOURCE=..\..\..\..\system\memory\memory.h
# End Source File
# End Group
# End Group
# End Target
# End Project
