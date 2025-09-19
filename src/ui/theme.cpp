#include "ui/theme.h"

#if defined(__has_include)
#  if __has_include("ui/fonts/inter_18.h")
#    include "ui/fonts/inter_18.h"
#    define UI_HAS_CUSTOM_FONT 1
#  else
#    define UI_HAS_CUSTOM_FONT 0
#  endif
#else
#  define UI_HAS_CUSTOM_FONT 0
#endif

void ui_theme_init(void)
{
  #if UI_HAS_CUSTOM_FONT
  lv_disp_t * disp = lv_disp_get_default();
  if (disp)
  {
    lv_theme_t * theme = NULL;
    #if LVGL_VERSION_MAJOR >= 9
      theme = lv_theme_default_init(disp, &inter_18, NULL, false, LV_THEME_DEFAULT_DARK);
    #else
      theme = lv_theme_default_init(disp, lv_color_black(), lv_color_white(), false, &inter_18);
    #endif
    if (theme)
    {
      lv_disp_set_theme(disp, theme);
    }

    /* Also set on current screen as a safety so text uses the font immediately */
    lv_obj_t * scr = lv_scr_act();
    if (scr)
    {
      lv_obj_set_style_text_font(scr, &inter_18, 0);
    }
  }
  #endif
}


