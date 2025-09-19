#include <map>
#include "ui/ui_manager.h"

static std::map<int, ui_screen_factory_t> id_to_factory;
static lv_obj_t * current_screen = nullptr;
static int current_id = -1;

void ui_manager_init(void)
{
  id_to_factory.clear();
  current_screen = nullptr;
  current_id = -1;
}

void ui_manager_register(ui_screen_id_t id, ui_screen_factory_t factory)
{
  id_to_factory[(int)id] = factory;
}

void ui_manager_show(ui_screen_id_t id)
{
  auto it = id_to_factory.find((int)id);
  if (it == id_to_factory.end())
  {
    return;
  }

  if (current_screen != nullptr)
  {
    lv_obj_del(current_screen);
    current_screen = nullptr;
  }

  ui_screen_factory_t factory = it->second;
  current_screen = factory();
  if (current_screen != nullptr)
  {
    lv_disp_load_scr(current_screen);
    current_id = (int)id;
  }
}

void ui_manager_refresh(void)
{
  if (current_id < 0) return;
  auto it = id_to_factory.find(current_id);
  if (it == id_to_factory.end()) return;

  if (current_screen != nullptr)
  {
    lv_obj_del(current_screen);
    current_screen = nullptr;
  }

  ui_screen_factory_t factory = it->second;
  current_screen = factory();
  if (current_screen != nullptr)
  {
    lv_disp_load_scr(current_screen);
  }
}


