/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __MSM_VIDC_H__
#define __MSM_VIDC_H__
#include <linux/types.h>
#define MSM_VIDC_HAL_INTERLACE_COLOR_FORMAT_NV12 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSM_VIDC_HAL_INTERLACE_COLOR_FORMAT_NV12_UBWC 0x8002
struct msm_vidc_extradata_header {
  unsigned int size;
  unsigned int : 32;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int : 32;
  unsigned int type;
  unsigned int data_size;
  unsigned char data[1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_vidc_interlace_payload {
  unsigned int format;
  unsigned int color_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_vidc_framerate_payload {
  unsigned int frame_rate;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_vidc_ts_payload {
  unsigned int timestamp_lo;
  unsigned int timestamp_hi;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_vidc_concealmb_payload {
  unsigned int num_mbs;
};
struct msm_vidc_recoverysei_payload {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int flags;
};
struct msm_vidc_aspect_ratio_payload {
  unsigned int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int version;
  unsigned int port_index;
  unsigned int aspect_width;
  unsigned int aspect_height;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_vidc_mpeg2_seqdisp_payload {
  unsigned int video_format;
  unsigned int color_descp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int color_primaries;
  unsigned int transfer_char;
  unsigned int matrix_coeffs;
  unsigned int disp_width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int disp_height;
};
struct msm_vidc_input_crop_payload {
  unsigned int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int version;
  unsigned int port_index;
  unsigned int left;
  unsigned int top;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int width;
  unsigned int height;
};
struct msm_vidc_digital_zoom_payload {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int size;
  unsigned int version;
  unsigned int port_index;
  unsigned int zoom_width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int zoom_height;
};
struct msm_vidc_extradata_index {
  unsigned int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  union {
    struct msm_vidc_input_crop_payload input_crop;
    struct msm_vidc_digital_zoom_payload digital_zoom;
    struct msm_vidc_aspect_ratio_payload aspect_ratio;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  };
};
struct msm_vidc_panscan_window {
  unsigned int panscan_height_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int panscan_width_offset;
  unsigned int panscan_window_width;
  unsigned int panscan_window_height;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_vidc_panscan_window_payload {
  unsigned int num_panscan_windows;
  struct msm_vidc_panscan_window wnd[1];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_vidc_stream_userdata_payload {
  unsigned int type;
  unsigned int data[1];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_vidc_frame_qp_payload {
  unsigned int frame_qp;
};
struct msm_vidc_frame_bits_info_payload {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int frame_bits;
  unsigned int header_bits;
};
struct msm_vidc_s3d_frame_packing_payload {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int fpa_id;
  unsigned int cancel_flag;
  unsigned int fpa_type;
  unsigned int quin_cunx_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int content_interprtation_type;
  unsigned int spatial_flipping_flag;
  unsigned int frame0_flipped_flag;
  unsigned int field_views_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int current_frame_is_frame0_flag;
  unsigned int frame0_self_contained_flag;
  unsigned int frame1_self_contained_flag;
  unsigned int frame0_graid_pos_x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int frame0_graid_pos_y;
  unsigned int frame1_graid_pos_x;
  unsigned int frame1_graid_pos_y;
  unsigned int fpa_reserved_byte;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int fpa_repetition_period;
  unsigned int fpa_extension_flag;
};
struct msm_vidc_vqzip_sei_payload {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int size;
  unsigned int data[1];
};
struct msm_vidc_yuv_stats_payload {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int frame_qp;
  unsigned int texture;
  unsigned int luma_in_q16;
  unsigned int frame_difference;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct msm_vidc_roi_qp_payload {
  int upper_qp_offset;
  int lower_qp_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int b_roi_info;
  int mbi_info_size;
  unsigned int data[1];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_vidc_extradata_type {
  MSM_VIDC_EXTRADATA_NONE = 0x00000000,
  MSM_VIDC_EXTRADATA_MB_QUANTIZATION = 0x00000001,
  MSM_VIDC_EXTRADATA_INTERLACE_VIDEO = 0x00000002,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_EXTRADATA_VC1_FRAMEDISP = 0x00000003,
  MSM_VIDC_EXTRADATA_VC1_SEQDISP = 0x00000004,
  MSM_VIDC_EXTRADATA_TIMESTAMP = 0x00000005,
  MSM_VIDC_EXTRADATA_S3D_FRAME_PACKING = 0x00000006,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_EXTRADATA_FRAME_RATE = 0x00000007,
  MSM_VIDC_EXTRADATA_PANSCAN_WINDOW = 0x00000008,
  MSM_VIDC_EXTRADATA_RECOVERY_POINT_SEI = 0x00000009,
  MSM_VIDC_EXTRADATA_MPEG2_SEQDISP = 0x0000000D,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_EXTRADATA_STREAM_USERDATA = 0x0000000E,
  MSM_VIDC_EXTRADATA_FRAME_QP = 0x0000000F,
  MSM_VIDC_EXTRADATA_FRAME_BITS_INFO = 0x00000010,
  MSM_VIDC_EXTRADATA_VQZIP_SEI = 0x00000011,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_EXTRADATA_ROI_QP = 0x00000013,
  MSM_VIDC_EXTRADATA_INPUT_CROP = 0x0700000E,
  MSM_VIDC_EXTRADATA_DIGITAL_ZOOM = 0x07000010,
  MSM_VIDC_EXTRADATA_MULTISLICE_INFO = 0x7F100000,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_EXTRADATA_NUM_CONCEALED_MB = 0x7F100001,
  MSM_VIDC_EXTRADATA_INDEX = 0x7F100002,
  MSM_VIDC_EXTRADATA_ASPECT_RATIO = 0x7F100003,
  MSM_VIDC_EXTRADATA_METADATA_LTR = 0x7F100004,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_EXTRADATA_METADATA_FILLER = 0x7FE00002,
  MSM_VIDC_EXTRADATA_METADATA_MBI = 0x7F100005,
  MSM_VIDC_EXTRADATA_YUVSTATS_INFO = 0x7F100007,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_vidc_interlace_type {
  MSM_VIDC_INTERLACE_FRAME_PROGRESSIVE = 0x01,
  MSM_VIDC_INTERLACE_INTERLEAVE_FRAME_TOPFIELDFIRST = 0x02,
  MSM_VIDC_INTERLACE_INTERLEAVE_FRAME_BOTTOMFIELDFIRST = 0x04,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_INTERLACE_FRAME_TOPFIELDFIRST = 0x08,
  MSM_VIDC_INTERLACE_FRAME_BOTTOMFIELDFIRST = 0x10,
};
enum msm_vidc_recovery_sei {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_FRAME_RECONSTRUCTION_INCORRECT = 0x0,
  MSM_VIDC_FRAME_RECONSTRUCTION_CORRECT = 0x01,
  MSM_VIDC_FRAME_RECONSTRUCTION_APPROXIMATELY_CORRECT = 0x02,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_vidc_userdata_type {
  MSM_VIDC_USERDATA_TYPE_FRAME = 0x1,
  MSM_VIDC_USERDATA_TYPE_TOP_FIELD = 0x2,
  MSM_VIDC_USERDATA_TYPE_BOTTOM_FIELD = 0x3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_vidc_pixel_depth {
  MSM_VIDC_BIT_DEPTH_8,
  MSM_VIDC_BIT_DEPTH_10,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MSM_VIDC_BIT_DEPTH_UNSUPPORTED = 0XFFFFFFFF,
};
#endif

