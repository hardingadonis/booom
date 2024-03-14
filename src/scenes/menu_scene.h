#ifndef _MENU_SCENE_H_
#define _MENU_SCENE_H_

#include "../config.h"

void menu_scene_handle_event(SDL_Event*);

void menu_scene_update(float);

void menu_scene_render(SDL_Renderer*);

#endif // _MENU_SCENE_H_