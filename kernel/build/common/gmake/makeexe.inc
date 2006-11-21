# ----------------------------------------------------------------------------
#  Hyper Operating System V4 Advance
#    common file for GNU make
#
#  Copyright (C) 1998-2006 by Project HOS
#  http://sourceforge.jp/projects/hos/
# ----------------------------------------------------------------------------


# --------------------------------------
#  %jp{オプション解析}
# --------------------------------------

ifeq ($(DEBUG),Yes)
# %jp{デバッグ指定があればデバッグ版作成}
TARGET := $(TARGET)dbg
AFLAGS += $(AFLAGS_DBG) $(AFLAGS_OPT_NONE)
CFLAGS += $(CFLAGS_DBG) $(CFLAGS_OPT_NONE)
else
ifeq ($(OPT_SPEED),Yes)
# %jp{速度最適化指定があれば速度優先}
AFLAGS += $(AFLAGS_OPT_SPEED)
CFLAGS += $(AFLAGS_OPT_SPEED)
else
ifeq ($(OPT_SIZE),Yes)
# %jp{サイズ優先適化指定があればサイズ優先}
AFLAGS += $(AFLAGS_OPT_SIZE)
CFLAGS += $(AFLAGS_OPT_SIZE)
else
# %jp{デフォルトで通常の最適化}
AFLAGS += $(AFLAGS_OPT_NORMAL)
CFLAGS += $(AFLAGS_OPT_NORMAL)
endif
endif
endif



# --------------------------------------
#  %jp{カーネルライブラリの選択}
# --------------------------------------

OS_LIB ?= libhosv4a

# %jp{デバッグ指定}
ifeq ($(KERNEL_DEBUG),Yes)
OS_LIB := $(OS_LIB)dbg
endif

# %jp{エラーレベル指定}
ifeq ($(KERNEL_ERRLEVEL),0)
OS_LIB := $(OS_LIB)er0
endif
ifeq ($(KERNEL_ERRLEVEL),1)
OS_LIB := $(OS_LIB)er1
endif
ifeq ($(KERNEL_ERRLEVEL),2)
OS_LIB := $(OS_LIB)er2
endif
ifeq ($(KERNEL_ERRLEVEL),3)
OS_LIB := $(OS_LIB)er3
endif
ifeq ($(KERNEL_ERRLEVEL),4)
OS_LIB := $(OS_LIB)er4
endif


# --------------------------------------
#  %jp{カーネル利用の設定}
# --------------------------------------

INC_DIRS += $(KERNEL_DIR)/include
LIBS     += $(KERNEL_BUILD_DIR)/$(OS_LIB).$(EXT_LIB)


# --------------------------------------
#  %jp{各種設定}
# --------------------------------------

# 基本オプション設定
CFLAGS += $(CFLAGS_INC) $(CFLAGS_DEF)
AFLAGS += $(CFLAGS_INC) $(CFLAGS_DEF)

# %jp{サーチパス設定}
VPATH = $(subst $(space),:,$(SRC_DIRS))

# %jp{オブジェクトファイル}
OBJS = $(addprefix $(OBJS_DIR)/, $(addsuffix .$(EXT_OBJ), $(basename $(notdir $(ASRCS)))))	\
       $(addprefix $(OBJS_DIR)/, $(addsuffix .$(EXT_OBJ), $(basename $(notdir $(CSRCS)))))


# --------------------------------------
#  %jp{ルール}
# --------------------------------------

# %jp{ライブラリ生成}
.PHONY : makeexe_all
makeexe_all: $(CSRCS) $(ASRCS) mk_kernel mkdir_objs

# %jp{クリーンナップ}
.PHONY : makeexe_clean
makeexe_clean:
	$(CMD_RM) -f $(TARGET_LIB) $(OBJS)

# %jp{カーネル生成}
.PHONY : mk_kernel
mk_kernel:
	make -C $(KERNEL_BUILD_DIR) -f gmake.mak DEBUG=$(KERNEL_DEBUG) ERRLEVEL=$(KERNEL_ERRLEVEL)

# %jp{カーネル生成}
.PHONY : clean_kernel
clean_kernel:
	make -C $(KERNEL_BUILD_DIR) -f gmake.mak DEBUG=$(KERNEL_DEBUG) ERRLEVEL=$(KERNEL_ERRLEVEL) clean

# %jp{オブジェクト出力ディレクトリ作成}
.PHONY : mkdir_objs
mkdir_objs:
	$(CMD_MKDIR) -p $(OBJS_DIR)

# %jp{ソースのコピー}
ifdef SRCCPYDIR
.PHONY : srccpy
srccpy:
	$(CMD_CP) -t $(SRCCPYDIR) $(ASRCS) $(CSRCS)
endif


# end of file