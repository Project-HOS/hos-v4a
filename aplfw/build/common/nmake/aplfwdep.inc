# ----------------------------------------------------------------------------
#  Hyper Operating System V4 Advance  Application Framework
#    common depend file for nmake
#
#  Copyright (C) 1998-2007 by Project HOS
#  http://sourceforge.jp/projects/hos/
# ----------------------------------------------------------------------------



# ----------------------------------
#  source copy
# ----------------------------------
srcobjcp_makelib:
	$(CMD_CP) $(SYSTEM_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(SYSAPI_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(HANDLE_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(MEMORY_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(TIME_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(PROCESS_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(EVENT_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(FILE_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(COMMAND_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(SHELL_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(MEMPOL_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(ASSOC_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(LIST_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(STREAMBUF_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(PACKETBUF_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(IPCHECKSUM_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(CRC16_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(VT100_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(TCPIP_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(IPETHER_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(NE2000_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(LAN9000_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(LAN9118_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(PC16550_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(AT91USART_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(RENESASSCI_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(MX1UART_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(WINSOCK_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(FATVOL_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(MEMDUMP_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(MEMWRITE_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(MEMTEST_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(KEYTEST_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(TIMECMD_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(FILELIST_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(FILECAT_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(FILECOPY_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(FILEDUMP_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(ETHERSNOOP_DIR)\*.* $(OBJS_DIR)
	$(CMD_CP) $(HELLO_DIR)\*.* $(OBJS_DIR)



# ----------------------------------
#  depend
# ----------------------------------

$(OBJS_DIR)\system_initialize.$(EXT_OBJ):	$(OBJS_DIR)\system_initialize.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\system_boot.$(EXT_OBJ):	$(OBJS_DIR)\system_boot.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\system_requestproc.$(EXT_OBJ):	$(OBJS_DIR)\system_requestproc.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\system_process.$(EXT_OBJ):	$(OBJS_DIR)\system_process.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\sysapi_initialize.$(EXT_OBJ):	$(OBJS_DIR)\sysapi_initialize.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysloc_lock.$(EXT_OBJ):	$(OBJS_DIR)\sysloc_lock.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysloc_unlock.$(EXT_OBJ):	$(OBJS_DIR)\sysloc_unlock.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysevt_clear.$(EXT_OBJ):	$(OBJS_DIR)\sysevt_clear.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysevt_create.$(EXT_OBJ):	$(OBJS_DIR)\sysevt_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysevt_delete.$(EXT_OBJ):	$(OBJS_DIR)\sysevt_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysevt_set.$(EXT_OBJ):	$(OBJS_DIR)\sysevt_set.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysevt_wait.$(EXT_OBJ):	$(OBJS_DIR)\sysevt_wait.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysint_clear.$(EXT_OBJ):	$(OBJS_DIR)\sysint_clear.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysint_disable.$(EXT_OBJ):	$(OBJS_DIR)\sysint_disable.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysint_enable.$(EXT_OBJ):	$(OBJS_DIR)\sysint_enable.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysisr_create.$(EXT_OBJ):	$(OBJS_DIR)\sysisr_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysisr_delete.$(EXT_OBJ):	$(OBJS_DIR)\sysisr_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmem_alloc.$(EXT_OBJ):	$(OBJS_DIR)\sysmem_alloc.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmem_free.$(EXT_OBJ):	$(OBJS_DIR)\sysmem_free.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmem_getmemif.$(EXT_OBJ):	$(OBJS_DIR)\sysmem_getmemif.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmem_getsize.$(EXT_OBJ):	$(OBJS_DIR)\sysmem_getsize.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmem_realloc.$(EXT_OBJ):	$(OBJS_DIR)\sysmem_realloc.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmtx_create.$(EXT_OBJ):	$(OBJS_DIR)\sysmtx_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmtx_delete.$(EXT_OBJ):	$(OBJS_DIR)\sysmtx_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmtx_lock.$(EXT_OBJ):	$(OBJS_DIR)\sysmtx_lock.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysmtx_unlock.$(EXT_OBJ):	$(OBJS_DIR)\sysmtx_unlock.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysprc_create.$(EXT_OBJ):	$(OBJS_DIR)\sysprc_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysprc_delete.$(EXT_OBJ):	$(OBJS_DIR)\sysprc_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysprc_exit.$(EXT_OBJ):	$(OBJS_DIR)\sysprc_exit.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysprc_getcurrenthandle.$(EXT_OBJ):	$(OBJS_DIR)\sysprc_getcurrenthandle.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysprc_start.$(EXT_OBJ):	$(OBJS_DIR)\sysprc_start.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\systim_getsystemtime.$(EXT_OBJ):	$(OBJS_DIR)\systim_getsystemtime.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\systim_wait.$(EXT_OBJ):	$(OBJS_DIR)\systim_wait.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysctx_isisr.$(EXT_OBJ):	$(OBJS_DIR)\sysctx_isisr.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\handle_close.$(EXT_OBJ):	$(OBJS_DIR)\handle_close.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\handleobj_create.$(EXT_OBJ):	$(OBJS_DIR)\handleobj_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\handleobj_delete.$(EXT_OBJ):	$(OBJS_DIR)\handleobj_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\memory.$(EXT_OBJ):	$(OBJS_DIR)\memory.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\time_getsystemtime.$(EXT_OBJ):	$(OBJS_DIR)\time_getsystemtime.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\time_wait.$(EXT_OBJ):	$(OBJS_DIR)\time_wait.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\process.$(EXT_OBJ):	$(OBJS_DIR)\process.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\procobj.$(EXT_OBJ):	$(OBJS_DIR)\procobj.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\event_create.$(EXT_OBJ):	$(OBJS_DIR)\event_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\event_delete.$(EXT_OBJ):	$(OBJS_DIR)\event_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\event_set.$(EXT_OBJ):	$(OBJS_DIR)\event_set.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\event_wait.$(EXT_OBJ):	$(OBJS_DIR)\event_wait.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\file_initialize.$(EXT_OBJ):	$(OBJS_DIR)\file_initialize.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_open.$(EXT_OBJ):	$(OBJS_DIR)\file_open.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_close.$(EXT_OBJ):	$(OBJS_DIR)\file_close.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\file_iocontrol.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_seek.$(EXT_OBJ):	$(OBJS_DIR)\file_seek.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_read.$(EXT_OBJ):	$(OBJS_DIR)\file_read.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_write.$(EXT_OBJ):	$(OBJS_DIR)\file_write.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_readdir.$(EXT_OBJ):	$(OBJS_DIR)\file_readdir.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_getchar.$(EXT_OBJ):	$(OBJS_DIR)\file_getchar.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_getstring.$(EXT_OBJ):	$(OBJS_DIR)\file_getstring.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_putchar.$(EXT_OBJ):	$(OBJS_DIR)\file_putchar.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_putstring.$(EXT_OBJ):	$(OBJS_DIR)\file_putstring.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_adddevice.$(EXT_OBJ):	$(OBJS_DIR)\file_adddevice.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\file_addvolume.$(EXT_OBJ):	$(OBJS_DIR)\file_addvolume.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_create.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_delete.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_open.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_open.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_close.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_close.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_iocontrol.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_seek.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_seek.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_read.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_read.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_write.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_write.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\drvobj_flush.$(EXT_OBJ):	$(OBJS_DIR)\drvobj_flush.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\fileobj_create.$(EXT_OBJ):	$(OBJS_DIR)\fileobj_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\fileobj_delete.$(EXT_OBJ):	$(OBJS_DIR)\fileobj_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\volumeobj_create.$(EXT_OBJ):	$(OBJS_DIR)\volumeobj_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\volumeobj_makedir.$(EXT_OBJ):	$(OBJS_DIR)\volumeobj_makedir.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\volumeobj_remove.$(EXT_OBJ):	$(OBJS_DIR)\volumeobj_remove.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrdrv_create.$(EXT_OBJ):	$(OBJS_DIR)\chrdrv_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrdrv_delete.$(EXT_OBJ):	$(OBJS_DIR)\chrdrv_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrdrv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\chrdrv_iocontrol.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrdrv_setreadsignal.$(EXT_OBJ):	$(OBJS_DIR)\chrdrv_setreadsignal.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrdrv_setwritesignal.$(EXT_OBJ):	$(OBJS_DIR)\chrdrv_setwritesignal.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrdrv_waitreadsignal.$(EXT_OBJ):	$(OBJS_DIR)\chrdrv_waitreadsignal.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrdrv_waitwritesignal.$(EXT_OBJ):	$(OBJS_DIR)\chrdrv_waitwritesignal.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrfile_create.$(EXT_OBJ):	$(OBJS_DIR)\chrfile_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\chrfile_delete.$(EXT_OBJ):	$(OBJS_DIR)\chrfile_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysvol_create.$(EXT_OBJ):	$(OBJS_DIR)\sysvol_create.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysvol_delete.$(EXT_OBJ):	$(OBJS_DIR)\sysvol_delete.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysvol_open.$(EXT_OBJ):	$(OBJS_DIR)\sysvol_open.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysvol_close.$(EXT_OBJ):	$(OBJS_DIR)\sysvol_close.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysvol_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\sysvol_iocontrol.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\sysvol_adddevice.$(EXT_OBJ):	$(OBJS_DIR)\sysvol_adddevice.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\console_getch.$(EXT_OBJ):	$(OBJS_DIR)\console_getch.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\filefmt.$(EXT_OBJ):	$(OBJS_DIR)\filefmt.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)
$(OBJS_DIR)\stdfile.$(EXT_OBJ):	$(OBJS_DIR)\stdfile.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\command.$(EXT_OBJ):	$(OBJS_DIR)\command.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\shell.$(EXT_OBJ):	$(OBJS_DIR)\shell.c	$(COMMON_HEADERS) $(SYSTEM_HEADERS)

$(OBJS_DIR)\mempol.$(EXT_OBJ):	$(OBJS_DIR)\mempol.c	$(COMMON_HEADERS)

$(OBJS_DIR)\assoc.$(EXT_OBJ):	$(OBJS_DIR)\assoc.c	$(COMMON_HEADERS)

$(OBJS_DIR)\list_create.$(EXT_OBJ):	$(OBJS_DIR)\list_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_createex.$(EXT_OBJ):	$(OBJS_DIR)\list_createex.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_addtail.$(EXT_OBJ):	$(OBJS_DIR)\list_addtail.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_getat.$(EXT_OBJ):	$(OBJS_DIR)\list_getat.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_getheadpos.$(EXT_OBJ):	$(OBJS_DIR)\list_getheadpos.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_getnextpos.$(EXT_OBJ):	$(OBJS_DIR)\list_getnextpos.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_getprevpos.$(EXT_OBJ):	$(OBJS_DIR)\list_getprevpos.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_gettailpos.$(EXT_OBJ):	$(OBJS_DIR)\list_gettailpos.c	$(COMMON_HEADERS)
$(OBJS_DIR)\list_remove.$(EXT_OBJ):	$(OBJS_DIR)\list_remove.c	$(COMMON_HEADERS)

$(OBJS_DIR)\streambuf_create.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_getbuf.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_getbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_sendbuf.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_sendbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_senddata.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_senddata.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_sendchar.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_sendchar.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_recvbuf.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_recvbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_relbuf.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_relbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_recvdata.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_recvdata.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_recvchar.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_recvchar.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_clear.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_clear.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_refdatasize.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_refdatasize.c	$(COMMON_HEADERS)
$(OBJS_DIR)\streambuf_reffreesize.$(EXT_OBJ):	$(OBJS_DIR)\streambuf_reffreesize.c	$(COMMON_HEADERS)

$(OBJS_DIR)\packetbuf_create.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\packetbuf_getbuf.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_getbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\packetbuf_sendbuf.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_sendbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\packetbuf_senddata.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_senddata.c	$(COMMON_HEADERS)
$(OBJS_DIR)\packetbuf_recvbuf.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_recvbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\packetbuf_relbuf.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_relbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\packetbuf_recvdata.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_recvdata.c	$(COMMON_HEADERS)
$(OBJS_DIR)\packetbuf_clear.$(EXT_OBJ):	$(OBJS_DIR)\packetbuf_clear.c	$(COMMON_HEADERS)

$(OBJS_DIR)\ipchecksum_getdigest.$(EXT_OBJ):	$(OBJS_DIR)\ipchecksum_getdigest.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipchecksum_update.$(EXT_OBJ):	$(OBJS_DIR)\ipchecksum_update.c	$(COMMON_HEADERS)

$(OBJS_DIR)\crc16_getdigest.$(EXT_OBJ):	$(OBJS_DIR)\crc16_getdigest.c	$(COMMON_HEADERS)
$(OBJS_DIR)\crc16_update.$(EXT_OBJ):	$(OBJS_DIR)\crc16_update.c	$(COMMON_HEADERS)
$(OBJS_DIR)\crc16_reset.$(EXT_OBJ):	$(OBJS_DIR)\crc16_reset.c	$(COMMON_HEADERS)
$(OBJS_DIR)\crc16_table.$(EXT_OBJ):	$(OBJS_DIR)\crc16_table.c	$(COMMON_HEADERS)

$(OBJS_DIR)\vt100drv_create.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_delete.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_open.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_close.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_seek.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_read.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_write.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_flush.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\vt100drv_getch.$(EXT_OBJ):	$(OBJS_DIR)\vt100drv_getch.c	$(COMMON_HEADERS)

$(OBJS_DIR)\tcpip_create.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_delete.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_open.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_clese.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_clese.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_seek.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_read.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_write.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_flush.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\tcpip_recv.$(EXT_OBJ):	$(OBJS_DIR)\tcpip_recv.c	$(COMMON_HEADERS)

$(OBJS_DIR)\ipether_create.$(EXT_OBJ):	$(OBJS_DIR)\ipether_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_delete.$(EXT_OBJ):	$(OBJS_DIR)\ipether_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_open.$(EXT_OBJ):	$(OBJS_DIR)\ipether_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_clese.$(EXT_OBJ):	$(OBJS_DIR)\ipether_clese.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\ipether_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_seek.$(EXT_OBJ):	$(OBJS_DIR)\ipether_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_read.$(EXT_OBJ):	$(OBJS_DIR)\ipether_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_write.$(EXT_OBJ):	$(OBJS_DIR)\ipether_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_recv.$(EXT_OBJ):	$(OBJS_DIR)\ipether_recv.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_flush.$(EXT_OBJ):	$(OBJS_DIR)\ipether_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ipether_getmacaddr.$(EXT_OBJ):	$(OBJS_DIR)\ipether_getmacaddr.c	$(COMMON_HEADERS)

$(OBJS_DIR)\ne2000drv.$(EXT_OBJ):	$(OBJS_DIR)\ne2000drv.c	$(COMMON_HEADERS)
$(OBJS_DIR)\ne2000hal.$(EXT_OBJ):	$(OBJS_DIR)\ne2000hal.c	$(COMMON_HEADERS)

$(OBJS_DIR)\lan9000drv_close.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_create.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_delete.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_flush.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_isr.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_isr.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_open.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_read.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_seek.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000drv_write.$(EXT_OBJ):	$(OBJS_DIR)\lan9000drv_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_create.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_delete.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_getinterruptstatus.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_getinterruptstatus.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_getphysicaladdr.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_getphysicaladdr.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_mii.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_mii.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_phyregread.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_phyregread.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_phyregwrite.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_phyregwrite.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_recv.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_recv.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_send.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_send.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_setinterruptmask.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_setinterruptmask.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_setup.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_setup.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9000hal_stop.$(EXT_OBJ):	$(OBJS_DIR)\lan9000hal_stop.c	$(COMMON_HEADERS)

$(OBJS_DIR)\lan9118drv_create.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_delete.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_open.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_close.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_seek.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_read.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_write.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_flush.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\lan9118drv_isr.$(EXT_OBJ):	$(OBJS_DIR)\lan9118drv_isr.c	$(COMMON_HEADERS)

$(OBJS_DIR)\pc16550drv_create.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_delete.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_open.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_close.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_seek.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_read.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_write.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_flush.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550drv_isr.$(EXT_OBJ):	$(OBJS_DIR)\pc16550drv_isr.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_create.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_delete.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_setup.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_setup.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_stop.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_stop.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_setspeed.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_setspeed.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_recvchar.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_recvchar.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_sendchar.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_sendchar.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_enableinterrupt.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_enableinterrupt.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_getinterruptstatus.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_getinterruptstatus.c	$(COMMON_HEADERS)
$(OBJS_DIR)\pc16550hal_getstatus.$(EXT_OBJ):	$(OBJS_DIR)\pc16550hal_getstatus.c	$(COMMON_HEADERS)

$(OBJS_DIR)\at91usartdrv_create.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_delete.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_open.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_close.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_seek.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_read.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_write.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_flush.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\at91usartdrv_isr.$(EXT_OBJ):	$(OBJS_DIR)\at91usartdrv_isr.c	$(COMMON_HEADERS)

$(OBJS_DIR)\scidrv_create.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_delete.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_open.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_close.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_seek.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_read.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_write.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_flush.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scidrv_isr.$(EXT_OBJ):	$(OBJS_DIR)\scidrv_isr.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_create.$(EXT_OBJ):	$(OBJS_DIR)\scihal_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_delete.$(EXT_OBJ):	$(OBJS_DIR)\scihal_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_enableinterrupt.$(EXT_OBJ):	$(OBJS_DIR)\scihal_enableinterrupt.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_recvchar.$(EXT_OBJ):	$(OBJS_DIR)\scihal_recvchar.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_sendchar.$(EXT_OBJ):	$(OBJS_DIR)\scihal_sendchar.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_setspeed.$(EXT_OBJ):	$(OBJS_DIR)\scihal_setspeed.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_setup.$(EXT_OBJ):	$(OBJS_DIR)\scihal_setup.c	$(COMMON_HEADERS)
$(OBJS_DIR)\scihal_stop.$(EXT_OBJ):	$(OBJS_DIR)\scihal_stop.c	$(COMMON_HEADERS)

$(OBJS_DIR)\mx1uartdrv_create.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_delete.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_open.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_close.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_seek.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_read.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_write.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_flush.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\mx1uartdrv_isr.$(EXT_OBJ):	$(OBJS_DIR)\mx1uartdrv_isr.c	$(COMMON_HEADERS)

$(OBJS_DIR)\winsockdrv.$(EXT_OBJ):	$(OBJS_DIR)\winsockdrv.c	$(COMMON_HEADERS)

$(OBJS_DIR)\fatvol_create.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_create.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_delete.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_delete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_open.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_open.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_close.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_close.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_iocontrol.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_iocontrol.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_seek.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_seek.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_read.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_read.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_write.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_write.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_flush.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_flush.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_makedir.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_makedir.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_remove.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_remove.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_clusterread.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_clusterread.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_clusterwrite.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_clusterwrite.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_filecreate.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_filecreate.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_filedelete.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_filedelete.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_flushclusterbuf.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_flushclusterbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_flushfat.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_flushfat.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_getclusterbuf.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_getclusterbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_relclusterbuf.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_relclusterbuf.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_getnewcluster.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_getnewcluster.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_getnextcluster.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_getnextcluster.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_setnextcluster.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_setnextcluster.c	$(COMMON_HEADERS)
$(OBJS_DIR)\fatvol_syncfilesize.$(EXT_OBJ):	$(OBJS_DIR)\fatvol_syncfilesize.c	$(COMMON_HEADERS)

$(OBJS_DIR)\memdump_main.$(EXT_OBJ):	$(OBJS_DIR)\memdump_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\memwrite_main.$(EXT_OBJ):	$(OBJS_DIR)\memwrite_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\memtest_main.$(EXT_OBJ):	$(OBJS_DIR)\memtest_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\keytest_main.$(EXT_OBJ):	$(OBJS_DIR)\keytest_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\timecmd_main.$(EXT_OBJ):	$(OBJS_DIR)\timecmd_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\filelist_main.$(EXT_OBJ):	$(OBJS_DIR)\filelist_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\filecat_main.$(EXT_OBJ):	$(OBJS_DIR)\filecat_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\filecopy_main.$(EXT_OBJ):	$(OBJS_DIR)\filecopy_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\filedump_main.$(EXT_OBJ):	$(OBJS_DIR)\filedump_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\ethersnoop_main.$(EXT_OBJ):	$(OBJS_DIR)\ethersnoop_main.c	$(COMMON_HEADERS)

$(OBJS_DIR)\hello.$(EXT_OBJ):	$(OBJS_DIR)\hello.c	$(COMMON_HEADERS)



# end of file