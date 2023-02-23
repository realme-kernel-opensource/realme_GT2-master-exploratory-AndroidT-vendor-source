/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2015-2019, The Linux Foundation. All rights reserved.
 * Copyright (C) 2017-2020, Pixelworks, Inc.
 *
 * These files contain modifications made by Pixelworks, Inc., in 2019-2020.
 */
#ifndef _DSI_IRIS_REG_
#define _DSI_IRIS_REG_

#define IRIS_FRC_MIF_ADDR	0xf2000000
#define IRIS_FRC_DS_ADDR	0xf2040000
#define IRIS_GMD_ADDR		0xf2080000
#define IRIS_FBD_ADDR		0xf20c0000
#define IRIS_CAD_ADDR		0xf2100000
#define IRIS_MVC_ADDR		0xf2140000
#define IRIS_FI_ADDR		0xf2180000
#define IRIS_RGME_ADDR		0xf21c0000
#define IRIS_MVF_ADDR		0xf2200000
#define IRIS_PWIL_ADDR		0xf1940000
#define IRIS_PWIL_0_ADDR	0xf1940000
#define IRIS_PWIL_1_ADDR	0xf1980000
#define IRIS_PSR_ADDR		0xf1780000
#define IRIS_BLENDING		0xf17c0000
#define IRIS_SRAM_CTRL_ADDR	0xf1080000
#define IRIS_SRAM_CTRL_ADDR1	0xf2280000
#define IRIS_DTG_ADDR		0xf1340000
#define IRIS_SYS_ADDR		0xf0000000
#define IRIS_RX0_ADDR           0xf1a00000
#define IRIS_RX1_ADDR		0xf1a40000
#define IRIS_AI_ADDR		0xf1740000
#define IRIS_PROXY_ADDR		0xf0040000

/*RX0*/
#define RX0_VDO_META		0x0080

/*RX1*/
#define RX_VDO_META         0x0080
#define DSI_DT_04           0x0104
#define DCS_CMD_2A_COL		0x0300
#define DCS_CMD_2B_PAGE		0x0304

/*SYS*/
#define ALT_CTRL0           0x00e4
#define ALT_CTRL1           0x00e8
#define ALT_CTRL2           0x00ec


/*DTG*/
#define TE2_FILTER_CTRL		0x00080
#define DTG_UPDATE			0x10000

/*BLENDING*/
#define BLENDING_CTRL		0x00000
#define CSR_TO				0x00018
#define BLENDING_VIDEO_CTRL		0x00030
#define BLENDING_GRP_CTRL		0x00040
#define BLENDING_CSR_CTRL		0x00058
#define BLENDING_UPDATE		0x10030

/*FRC_MIF*/
#define FRCC_MEM_CONFIG     0x00000
#define FRCC_ENABLE_0          0x10000
#define FRCC_ENABLE_1          0x10004
#define FRCC_CTRL_REG0		0x10008
#define FRCC_CTRL_REG1		0x1000C
#define FRCC_CTRL_REG2		0x10010
#define FRCC_CTRL_REG3		0x10014
#define FRCC_CTRL_REG4		0x10018
#define FRCC_CTRL_REG5		0x1001C
#define FRCC_CTRL_REG6		0x10020
#define FRCC_CTRL_REG7		0x10024
#define FRCC_CTRL_REG8		0x10028
#define FRCC_PHASE_CTRL_0  0x1002c
#define FRCC_PHASE_CTRL_1  0x10030
#define FRCC_FBD_CTRL_0      0x10034
#define FRCC_FBD_CTRL_1      0x10038
#define FRCC_FBD_CTRL_2      0x1003c
#define FRCC_FK_CTRL_0        0x10040
#define FRCC_FK_CTRL_1        0x10044
#define FRCC_FK_CTRL_2        0x10048
#define FRCC_FK_CTRL_3        0x1004c
#define FRCC_FK_CTRL_4        0x10050
#define FRCC_FK_CTRL_5        0x10054
#define FRCC_MVC_CTRL_0     0x10058
#define FRCC_MVF_CTRL_0     0x1005c
#define FRCC_FI_HW_META0	0x10094
#define FRCC_ECO_LIST		0x102b8
#define FRCC_REG_SHDW	      0x11020
#define FRCC_VD_MEM_ADDR  0x10264
#define FRCC_TNR_VD_BUF_SIZE 0x10268
#define FRCC_VD_MEM_OFF     0x1026c
#define FRCC_VD_MEM_HSTRIDE 0x10270
#define FRCC_MV_MEM_A1_BSADR  0x10274
#define FRCC_MV_MEM_A0_BSADR  0x10278
#define FRCC_MV_MEM_C1_BSADR  0x1027C
#define FRCC_MV_MEM_C0_BSADR  0x10280
#define FRCC_MV_MEM_A1_OFF  0x10284
#define FRCC_MV_MEM_A0_OFF  0x10288
#define FRCC_MV_MEM_C1_OFF  0x1028C
#define FRCC_MV_MEM_C0_OFF  0x10290
#define FRCC_MV_MEM_A1_HSTRIDE  0x10294
#define FRCC_MV_MEM_A0_HSTRIDE  0x10298
#define FRCC_MV_MEM_C1_HSTRIDE  0x1029C
#define FRCC_MV_MEM_C0_HSTRIDE  0x102A0
#define FRCC_EXT_MV_BSADR       0x102a4
#define FRCC_EXT_MV_HSTRIDE     0x102a8
#define FRCC_EXT_MV_OFF         0x102aC
#define FRCC_CTRL_REG9          0x102B4
#define FRCC_CTRL_ECO_REV_CTRL  0x102B8
#define FRCC_CTRL_REG10         0x10250

#define IMIF_MODE_CTRL		0x12000
#define IMIF_DW_PER_LINE	0x12008
#define IMIF_VSIZE			0x1200c
#define IMIF_SW_UPDATE_EN	0x13400
#define MMIF_CTRL1			0x14000
#define MMIF_CTRL2			0x14004
#define MMIF_PHASE1_BA		0x140E4
#define MMIF_PHASE0_BA		0x140E8
#define MMIF_UPDATE		0x15024
#define FMIF_CTRL			0x16000
#define FMIF_VD_FRM_ATTRIBUTE0	0x16004
#define FMIF_VD_FRM_ATTRIBUTE1	0x16008
#define FMIF_MV_FRM_ATTRIBUTE0	0x16014
#define FMIF_MV_FRM_ATTRIBUTE1	0x16020
#define FMIF_REG_SHDW		0x17000
/* FRC_DS */
#define FRC_DS_CTRL             0x00000
#define FRC_DS_RESO             0x0000c
#define FRC_DS_SHDW             0x1ff00
/* GMD */
#define GMD_GAIN		0x00000
#define GMD_FILT		0x00004
#define GMD_ACCUM		0x00008
#define GMD_SHIFT		0x0000c
#define GMD_START		0x00010
#define GMD_STOP		0x00014
#define GMD_CTRL		0x00020

/* FBD */
#define FILMBD_RESOLUTION		0x00014
#define FILMBD_WIN_STOP_SET		0x0001c
#define FILMBD_TOP_CTRL			0x00020

/* CAD */
#define NEW_FRM_FLG_DET_1		0x00004
#define CAD_DET_BASIC_CAD		0x0000c
#define CAD_DET_STVT			0x00010
#define CAD_DET_BAD_EDIT		0x00014
#define CAD_DET_VOF_0			0x00018
#define COMMON				0x00030
#define DUMMY				0x00040
#define SW_DONE				0x1ffd4

/* MVC */
#define MVC_CTRL_0			0x00000
#define MVC_TOP_CTRL_0			0x00004
#define MVC_TOP_CTRL_1			0x00008
#define GLB_MVSELECT_0			0x00078
#define GLB_MVSELECT_1			0x0007c
#define GLB_MVSELECT_2			0x00080
#define MVC_OSDDET_0			0x000ac
#define MVC_OSDDET_1			0x000b0
#define MVC_POSTFILT_0			0x000f0
#define MVC_SAD_2			    0x00160
#define MVC_KFBOSD_0			0x001f4
#define MVC_SW_UPDATE			0x1ff00

/* FI */
#define FI_MODE_CTRL                       0x00000
#define FI_CLOCK_GATING_CTRL_0     0x00004
#define FI_CLOCK_GATING_CTRL_1     0x00008
#define FI_DEMO_MODE_CTRL		0x0000c
#define FI_DEMO_WIN_SIZE_0		0x00010
#define FI_DEMO_WIN_SIZE_1		0x00014
#define FI_DEMO_YUV_VALUE		0x00018
#define FI_BLENDING_CTRL2          0x00024
#define FI_BLENDING_CTRL3          0x00028
#define FI_BLENDING_CTRL4          0x0002c
#define FI_MV_SELECT                    0x00034
#define FI_INPUT_FORMAT             0x00038
#define FI_RANGE_CTRL                 0x00040
#define FI_OSD_WINDOW_CTRL	0x00080
#define FI_OSD0_BR			0x00084
#define FI_OSD0_TL			0x00088
#define FI_OSD1_BR			0x0008C
#define FI_OSD1_TL			0x00090
#define FI_OSD2_BR			0x00094
#define FI_OSD2_TL			0x00098
#define FI_OSD3_BR			0x0009c
#define FI_OSD3_TL			0x000A0
#define FI_OSD4_BR			0x000A4
#define FI_OSD4_TL			0x000A8
#define FI_VIDEO_BUF_CTRL		0x000BC
#define FI_V9_GENERIC_CTRL		0x000C8
#define FI_MISC_CTRL			0x000Cc
#define FI_ECO_CTRL             0x000D0
#define FI_SHDW_CTRL			0x1ff00
#define FI_DEBUGBUS_MUX			0x1ffdc

/* MVF */
#define MVF_SMI_CTRL			0x00008
#define MVF_VERTIRANGE_CFG		0x0000c
#define MVF_CAND_CFG			0x00010
#define MVF_MISC_CFG3			0x00070
#define MVF_OSDMV3				0x000dc
#define EMVSEL_CFG2				0x0011c
#define EMVSEL_CFG10			0x0013c
#define EMVSEL_CFG13			0x00148
#define EMVSEL_CFG15			0x00150
#define EMVSEL_CFG19			0x00160
#define MVF_HMTNFB			0x0017c
#define MVF_SHDW_CTRL			0x001a8

/* RGME */
#define RGME_MIF_CTRL                   0x00008
#define FRAME_RES                       0x0000c
#define DSY_HSTRIDE                     0x00010
#define VD_FM_OFFSET                    0x00014
#define FRAME_BUFFER_0                  0x0001c

/* PWIL */
#define PWIL_CTRL                       0x00000
#define PWIL_CTRL0						0x00000
#define PWIL_CTRL1                      0x00004
#define DATA_PATH_CTRL0			0x00008
#define DATA_PATH_CTRL1			0x0000c
#define PWIL_DISP_RES			0x00010
#define PWIL_CAPT_CTRL0			0x00014
#define PWIL_SLICE_INFO0		0x00018
#define PWIL_SLICE_INFO1		0x0001c
#define PWIL_EFIFO_BASE_ADDR	0x0002c
#define PWIL_EFIFO_DEPTH		0x00030
#define PWIL_GRAPHIC_CTRL0		0x00068
#define PWIL_GRAPHIC_CTRL1		0x0006c
#define PWIL_GRAPHIC_CTRL2		0x00070
#define PWIL_GRAPHIC_CTRL3		0x00074
#define PWIL_GRAPHIC_CTRL4		0x00078
#define PWIL_GRAPHIC_CTRL5		0x0007c
#define PWIL_GRAPHIC_CTRL6		0x00080
#define PWIL_GRAPHIC_CTRL7		0x00084
#define PWIL_GRAPHIC_CTRL8		0x00088
#define PWIL_VIDEO_CTRL0		0x0008c
#define PWIL_VIDEO_CTRL1		0x00090
#define PWIL_VIDEO_CTRL2		0x00094
#define PWIL_VIDEO_CTRL3		0x00098
#define PWIL_VIDEO_CTRL4		0x0009c
#define PWIL_VIDEO_CTRL5		0x000a0
#define PWIL_VIDEO_CTRL6		0x000a4
#define PWIL_VIDEO_CTRL7		0x000a8
#define PWIL_VIDEO_CTRL8		0x000ac
#define PWIL_FRC_CTRL			0x000f8
#define PWIL_FRC_INIT			0x000fc
#define PWIL_DMA_CTRL			0x00150
#define PWIL_STATUS				0x0015c
#define PWIL_PIAD_BLEND_INFO		0x0017c
#define PWIL_CUR_META0			0x00228
#define PWIL_HANGUP_TIMEOUT_CNT 0x00270
#define PWIL_DISP_CTRL0			0x01000
#define PWIL_DISP_CTRL1			0x01004
#define PWIL_INPUT_META_CTRL	0x01014
#define PWIL_MV0_CTRL0			0x01018
#define PWIL_MV0_CTRL1			0x0101c
#define PWIL_MV0_CTRL2			0x01020
#define PWIL_MV0_CTRL3			0x01024
#define PWIL_MV1_CTRL0			0x01028
#define PWIL_MV1_CTRL1			0x0102c
#define PWIL_MV1_CTRL2			0x01030
#define PWIL_MV1_CTRL3			0x01034
#define PWIL_CMD_CTRL0			0x01040
#define PWIL_CMD_CTRL1			0x01044
#define PWIL_MV0_BASE_ADDR0		0x01074
#define PWIL_MV0_BASE_ADDR1		0x01078
#define PWIL_MV0_BASE_ADDR2		0x0107c
#define PWIL_MV0_BASE_ADDR3		0x01080
#define PWIL_MV1_BASE_ADDR0		0x01088
#define PWIL_MV1_BASE_ADDR1		0x0108c
#define PWIL_MV1_BASE_ADDR2		0x01090
#define PWIL_MV1_BASE_ADDR3		0x01094
#define PWIL_MV_H_STRIDE		0x01098
#define PWIL_INTCLR				0x1fff0
#define PWIL_REG_UPDATE			0x0106c

/* PWIL_1 */
#define PWIL_1_CAPT_CTRL	0x0004
#define PWIL_1_OSD_BASE_ADDR	0x0050
#define PWIL_1_OSD_BUF_DEPTH	0x0054
#define PWIL_1_REG_UPDATE		0x1010

/* PSR_MIF */
#define PSR_MIF_CTRL			0x00000
#define PSR_ELFIFO_CTRL			0x00004
#define PSR_RW_CTRL			0x00010
#define PSR_ELFIFO_STRIDE		0x0002c
#define PSR_WR_FIFO_DEPTH1		0x00054
#define PSR_SLICE_RAW_HSIZE		0x00104
#define PSR_SLICE_SIZE0			0x0010c
#define PSR_SLICE_SIZE1			0x00110
#define PSR_SLICE_SIZE2			0x00114
#define PSR_SLICE_SIZE3			0x00118
#define PSR_SW_CONTROL			0x1ff00

/* AI */
#define AI_DMA_RD_START3		0x00018
#define AI_DMA_WR_START3		0x00040
#define AI_UPDATE			0x1ffd4

#define MCU_SW_RESET			0x000c8
#define IRIS_MCU_INFO_1	             0xf0fe0000
#define IRIS_MCU_INFO_2	             0xf0fe0004
#define IRIS_UNIT_CTRL_INTEN    0xf0060008
#define IRIS_TX_RESERVE_0		0xf1880038
#define IRIS_DPORT_CTRL0		0xf12c0000
#define IRIS_DPORT_REGSEL		0xf12d0000

/* DTG */
#define TE_N2M_CTRL             0x000AC
#define DTG_UPDATE              0x10000
#define IVSA_FILTER_CTRL        0x24
#define DTG_CTRL                0x00020
#define OVS_DLY                 0x0003c

/* sram ctrl */
#define RAMCTRL_EFOB_CTRL		0x0005c
#define RAMCTRL_MVC_DSY_CTRL   0x00104

#endif