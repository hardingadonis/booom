#ifndef _COMMON_H_
#define _COMMON_H_

#include "config.h"

extern SDL_Window*		g_window				= NULL;
extern SDL_Renderer*	g_renderer				= NULL;

extern SDL_Texture*		g_tx_player				= NULL;
extern SDL_Texture*		g_tx_player_gun			= NULL;
extern SDL_Texture*		g_tx_player_bullet		= NULL;

extern SDL_Texture*		g_tx_map_background		= NULL;
extern SDL_Texture*		g_tx_map_tower			= NULL;

extern SDL_Texture*		g_tx_mt_goblin_attack	= NULL;
extern SDL_Texture*		g_tx_mt_goblin_death	= NULL;
extern SDL_Texture*		g_tx_mt_goblin_walk		= NULL;

extern SDL_Texture*		g_tx_mt_mushroom_attack	= NULL;
extern SDL_Texture*		g_tx_mt_mushroom_death	= NULL;
extern SDL_Texture*		g_tx_mt_mushroom_walk	= NULL;

extern SDL_Texture*		g_tx_mt_skeleton_attack	= NULL;
extern SDL_Texture*		g_tx_mt_skeleton_death	= NULL;
extern SDL_Texture*		g_tx_mt_skeleton_walk	= NULL;

#endif // _COMMON_H_