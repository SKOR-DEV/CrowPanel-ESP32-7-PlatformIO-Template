#include <Arduino.h>
#include "ui/screens/settings_screen.h"
#include "ui/ui_manager.h"
#include "ui/fonts/inter_18.h"
#include "ui/fonts/inter_18_bold.h"

static void close_settings_event_cb(lv_event_t * e)
{
  if (lv_event_get_code(e) == LV_EVENT_CLICKED)
  {
    ui_manager_show(UI_SCREEN_MAIN);
  }
}

lv_obj_t * ui_create_settings_screen(void)
{
  lv_obj_t * scr = lv_obj_create(NULL);
  lv_obj_clear_flag(scr, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_style_bg_color(scr, lv_color_white(), LV_PART_MAIN | LV_STATE_DEFAULT);

  /* Ensure our custom font is applied on this screen */
  lv_obj_set_style_text_font(scr, &inter_18, 0);

  /* Title */
  lv_obj_t * title = lv_label_create(scr);
  lv_label_set_text(title, "Налаштування");
  lv_obj_align(title, LV_ALIGN_TOP_MID, 0, 12);

  /* Version text with bold font */
  lv_obj_t * version = lv_label_create(scr);
  lv_label_set_text(version, "v.1.0.0");
  lv_obj_set_style_text_font(version, &inter_18_bold, 0);
  lv_obj_align(version, LV_ALIGN_TOP_MID, 0, 40);

  /* small X button at top-right */
  lv_obj_t * btn = lv_btn_create(scr);
  lv_obj_set_size(btn, 48, 48);
  lv_obj_align(btn, LV_ALIGN_TOP_RIGHT, -10, 10);
  lv_obj_add_event_cb(btn, close_settings_event_cb, LV_EVENT_CLICKED, NULL);

  lv_obj_t * label = lv_label_create(btn);
  lv_label_set_text(label, LV_SYMBOL_CLOSE);
  lv_obj_center(label);

  return scr;
}


