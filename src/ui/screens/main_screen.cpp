#include <Arduino.h>
#include "ui/screens/main_screen.h"
#include "ui/ui_manager.h"

static void open_settings_event_cb(lv_event_t * e)
{
  if (lv_event_get_code(e) == LV_EVENT_CLICKED)
  {
    ui_manager_show(UI_SCREEN_SETTINGS);
  }
}

lv_obj_t * ui_create_main_screen(void)
{
  lv_obj_t * scr = lv_obj_create(NULL);
  lv_obj_clear_flag(scr, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_style_bg_color(scr, lv_color_white(), LV_PART_MAIN | LV_STATE_DEFAULT);

  /* small settings button at top-right */
  lv_obj_t * btn = lv_btn_create(scr);
  lv_obj_set_size(btn, 48, 48);
  lv_obj_align(btn, LV_ALIGN_TOP_RIGHT, -10, 10);
  lv_obj_add_event_cb(btn, open_settings_event_cb, LV_EVENT_CLICKED, NULL);

  lv_obj_t * label = lv_label_create(btn);
  lv_label_set_text(label, LV_SYMBOL_SETTINGS);
  lv_obj_center(label);

  return scr;
}


