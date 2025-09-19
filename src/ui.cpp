#include <Arduino.h>
#include "ui.h"
#include "ui/theme.h"
#include "ui/styles.h"
#include "ui/ui_manager.h"
#include "ui/screens/main_screen.h"
#include "ui/screens/settings_screen.h"

void ui_init(void)
{
    lv_disp_t * disp = lv_disp_get_default();
    if (disp == nullptr)
    {
        return;
    }

    ui_theme_init();
    ui_styles_init();

    ui_manager_init();
    ui_manager_register(UI_SCREEN_MAIN, ui_create_main_screen);
    ui_manager_register(UI_SCREEN_SETTINGS, ui_create_settings_screen);
    ui_manager_show(UI_SCREEN_MAIN);
}
