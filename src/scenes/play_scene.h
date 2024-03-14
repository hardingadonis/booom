#ifndef _PLAY_SCENE_H_
#define _PLAY_SCENE_H_

#include "../config.h"

void play_scene_handle_event(SDL_Event*);

void play_scene_update(float);

void play_scene_render(SDL_Renderer*);

#endif // _PLAY_SCENE_H_