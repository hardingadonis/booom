#ifndef _COMMON_H_
#define _COMMON_H_

#include "config.h"

SDL_Window*			g_window				= NULL;
SDL_Renderer*		g_renderer				= NULL;

SDL_Texture*		g_tx_player				= NULL;
SDL_Texture*		g_tx_player_gun			= NULL;
SDL_Texture*		g_tx_player_bullet		= NULL;

SDL_Texture*		g_tx_map_background		= NULL;
SDL_Texture*		g_tx_map_tower			= NULL;

SDL_Texture*		g_tx_mt_goblin_attack	= NULL;
SDL_Texture*		g_tx_mt_goblin_death	= NULL;
SDL_Texture*		g_tx_mt_goblin_walk		= NULL;

SDL_Texture*		g_tx_mt_mushroom_attack	= NULL;
SDL_Texture*		g_tx_mt_mushroom_death	= NULL;
SDL_Texture*		g_tx_mt_mushroom_walk	= NULL;

SDL_Texture*		g_tx_mt_skeleton_attack	= NULL;
SDL_Texture*		g_tx_mt_skeleton_death	= NULL;
SDL_Texture*		g_tx_mt_skeleton_walk	= NULL;

#endif // _COMMON_H_