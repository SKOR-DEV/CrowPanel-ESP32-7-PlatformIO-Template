#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <lvgl.h>

typedef lv_obj_t * (*ui_screen_factory_t)(void);

typedef enum {
  UI_SCREEN_MAIN = 0,
  UI_SCREEN_SETTINGS = 1,
} ui_screen_id_t;

void ui_manager_init(void);
void ui_manager_register(ui_screen_id_t id, ui_screen_factory_t factory);
void ui_manager_show(ui_screen_id_t id);
void ui_manager_refresh(void);

#endif /* UI_MANAGER_H */

