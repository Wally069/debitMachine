// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.2.0
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen3_screen_init(void)
{
ui_Screen3 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image5 = lv_img_create(ui_Screen3);
lv_img_set_src(ui_Image5, &ui_img_thankyou_png);
lv_obj_set_width( ui_Image5, LV_SIZE_CONTENT);  /// 240
lv_obj_set_height( ui_Image5, LV_SIZE_CONTENT);   /// 320
lv_obj_set_align( ui_Image5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image5, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_ImgButton2 = lv_imgbtn_create(ui_Screen3);
lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_checkmark_png, NULL);
lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_checkmark02_png, NULL);
lv_obj_set_height( ui_ImgButton2, 73);
lv_obj_set_width( ui_ImgButton2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_ImgButton2, 3 );
lv_obj_set_y( ui_ImgButton2, 69 );
lv_obj_set_align( ui_ImgButton2, LV_ALIGN_CENTER );

lv_obj_add_event_cb(ui_ImgButton2, ui_event_ImgButton2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Screen3, ui_event_Screen3, LV_EVENT_ALL, NULL);

}