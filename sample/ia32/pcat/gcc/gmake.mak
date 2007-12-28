# ----------------------------------------------------------------------------
# Hyper Operating System V4 Advance
#  makefile for PC/AT
#
# Copyright (C) 1998-2006 by Project HOS
# http://sourceforge.jp/projects/hos/
# ----------------------------------------------------------------------------

# %jp{ターゲット名}
TARGET ?= sample


# %jp{ツール定義}
GCC_ARCH   ?= i386-elf-
CMD_CC     ?= $(GCC_ARCH)gcc
CMD_ASM    ?= $(GCC_ARCH)gcc
CMD_LINK   ?= $(GCC_ARCH)gcc
CMD_OBJCNV ?= $(GCC_ARCH)objcopy


# %jp{ディレクトリ定義}
OS_DIR            = ../../../..
KERNEL_DIR        = $(OS_DIR)/kernel
KERNEL_CFGRTR_DIR = $(OS_DIR)/cfgrtr/build/gcc
KERNEL_MAKINC_DIR = $(KERNEL_DIR)/build/common/gmake
KERNEL_BUILD_DIR  = $(KERNEL_DIR)/build/ia32/i386/gcc
OBJS_DIR          = objs_$(TARGET)

# %jp{共通定義読込み}
include $(KERNEL_MAKINC_DIR)/common.inc

# デバッグ版のターゲット名変更
ifeq ($(DEBUG),Yes)
TARGET := $(TARGET)dbg
endif


LINK_SCRIPT = link_fd.x


# %jp{フラグ設定}
CFLAGS  = -march=i386
AFLAGS  = -march=i386
LNFLAGS = -nostdlib -fno-exceptions -ffreestanding -fno-builtin -nostartfiles -Wl,-Map,$(TARGET).map,-T$(LINK_SCRIPT)


# %jp{コンフィギュレータ定義}
KERNEL_CFGRTR = $(KERNEL_CFGRTR_DIR)/h4acfg-i386

# 出力ファイル名
TARGET_EXE = $(TARGET).$(EXT_EXE)
TARGET_MOT = $(TARGET).$(EXT_MOT)
TARGET_HEX = $(TARGET).$(EXT_HEX)
TARGET_BIN = $(TARGET).$(EXT_BIN)


# %jp{gcc用の設定読込み}
include $(KERNEL_MAKINC_DIR)/gcc_d.inc

# ソースディレクトリ
SRC_DIRS += . ..

# アセンブラファイルの追加
ASRCS += ./bootloader.S


# %jp{C言語ファイルの追加}
CSRCS +=

# ../kernel_cfg.c	\
#         ../main.c			\
#         ../sample.c		\
#         ../ostimer.c		\
#         ../sci1.c


# %jp{ライブラリの追加}
LIBS  +=

# %jp{リンク制御対象制御}



# --------------------------------------
#  %jp{ルール}
# --------------------------------------

.PHONY : all
all: makeexe_all $(TARGET_BIN) $(TARGET_HEX) $(TARGET_MOT) fd.img

.PHONY : clean
clean: makeexe_clean
	rm -f $(TARGET_EXE) $(TARGET_EXE) $(OBJS) ../kernel_cfg.c ../kernel_id.h

.PHONY : depend
depend: makeexe_depend

.PHONY : mostlyclean
mostlyclean: clean kernel_clean

fd.img: $(TARGET_BIN)
	./fd_img.pl $(TARGET_BIN) fd.img

../kernel_cfg.c ../kernel_id.h: ../system.cfg
	cpp -E ../system.cfg ../system.i
	$(KERNEL_CFGRTR) ../system.i -c ../kernel_cfg.c -i ../kernel_id.h


# %jp{ライブラリ生成用設定読込み}
include $(KERNEL_MAKINC_DIR)/makeexe.inc

# %jp{shc用のルール定義読込み}
include $(KERNEL_MAKINC_DIR)/gcc_r.inc



# --------------------------------------
#  %jp{依存関係}
# --------------------------------------

$(OBJS_DIR)/sample.$(EXT_OBJ): ../sample.c ../kernel_id.h


# end of file

