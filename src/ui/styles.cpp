#include "ui/styles.h"

static lv_style_t style_btn_small;

void ui_styles_init(void)
{
  lv_style_init(&style_btn_small);
  lv_style_set_radius(&style_btn_small, 8);
}


