/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
 
 #include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CONTROL
#define LV_ATTRIBUTE_IMG_CONTROL
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CONTROL uint8_t control_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x0b, 0x0b, 0x0b, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x30, 0x00, 
  0x30, 0x00, 
  0x38, 0x00, 
  0x1c, 0x00, 
  0x06, 0x00, 
  0x23, 0x00, 
  0x21, 0x80, 
  0x20, 0xc0, 
  0x20, 0x60, 
  0x20, 0x30, 
  0x20, 0x10, 
  0x20, 0x10, 
  0x00, 0x00, 
};

const lv_img_dsc_t control_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 14,
  .header.h = 14,
  .data_size = 36,
  .data = control_map,
};

#ifndef LV_ATTRIBUTE_IMG_SHIFT
#define LV_ATTRIBUTE_IMG_SHIFT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SHIFT uint8_t shift_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x1d, 0x1d, 0x1d, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x02, 0x00, 
  0x03, 0x00, 
  0x02, 0x80, 
  0x3e, 0x40, 
  0x20, 0x20, 
  0x20, 0x10, 
  0x20, 0x20, 
  0x3c, 0x40, 
  0x02, 0x80, 
  0x03, 0x00, 
  0x02, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t shift_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 14,
  .header.h = 14,
  .data_size = 36,
  .data = shift_map,
};

#ifndef LV_ATTRIBUTE_IMG_ALT
#define LV_ATTRIBUTE_IMG_ALT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ALT uint8_t alt_map[] = {
  0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 0*/
  0x21, 0x21, 0x21, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x3f, 0xe0, 
  0x01, 0x10, 
  0x01, 0x10, 
  0x3f, 0xe0, 
  0x00, 0x00, 
  0x3f, 0xf0, 
  0x20, 0x00, 
  0x20, 0x10, 
  0x00, 0x10, 
  0x3f, 0xf0, 
  0x00, 0x10, 
  0x00, 0x10, 
  0x00, 0x00, 
};

const lv_img_dsc_t alt_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 14,
  .header.h = 14,
  .data_size = 36,
  .data = alt_map,
};

#ifndef LV_ATTRIBUTE_IMG_GUI
#define LV_ATTRIBUTE_IMG_GUI
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_GUI uint8_t gui_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x11, 0x11, 0x11, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 
  0x00, 0x00, 
  0x0e, 0xe0, 
  0x0e, 0xe0, 
  0x0e, 0xf0, 
  0x00, 0x00, 
  0x1e, 0xf0, 
  0x1e, 0xf0, 
  0x1e, 0xf8, 
  0x3e, 0xf8, 
  0x3e, 0xf8, 
  0x3e, 0xf8, 
  0x00, 0x00, 
  0x00, 0x00, 
};

const lv_img_dsc_t gui_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 14,
  .header.h = 14,
  .data_size = 36,
  .data = gui_map,
};