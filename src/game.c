#include "game.h"
#include "common.h"
#include "resource.h"

int is_game_running = 1;
int last_frame_time = 0;

int initialize_game()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		return 1;
	}

	g_window = SDL_CreateWindow(
		WINDOW_TITLE,
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WITDH,
		WINDOW_HEIGHT,
		SDL_WINDOW_SHOWN
	);

	if (g_window == NULL)
	{
		return 1;
	}

	g_renderer = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_PRESENTVSYNC);

	if (g_renderer == NULL)
	{
		return 1;
	}

	SDL_SetRenderDrawColor(g_renderer, 0, 0, 0, 255);

	is_game_running = 1;
	last_frame_time = 0;

	return 0;
}

void load_data_game()
{
	g_tx_player				= load_texture_from_file(RES_TX_PLAYER);
	g_tx_player_gun			= load_texture_from_file(RES_TX_PLAYER_GUN);
	g_tx_player_bullet		= load_texture_from_file(RES_TX_PLAYER_BULLET);

	g_tx_map_background		= load_texture_from_file(RES_TX_MAP_BACKGROUND);
	g_tx_map_tower			= load_texture_from_file(RES_TX_MAP_TOWER);

	g_tx_mt_goblin_attack	= load_texture_from_file(RES_TX_MT_GOBLIN_ATTACK);
	g_tx_mt_goblin_death	= load_texture_from_file(RES_TX_MT_GOBLIN_DEATH);
	g_tx_mt_goblin_walk		= load_texture_from_file(RES_TX_MT_GOBLIN_WALK);

	g_tx_mt_mushroom_attack	= load_texture_from_file(RES_TX_MT_MUSHROOM_ATTACK);
	g_tx_mt_mushroom_death	= load_texture_from_file(RES_TX_MT_MUSHROOM_DEATH);
	g_tx_mt_mushroom_walk	= load_texture_from_file(RES_TX_MT_MUSHROOM_WALK);

	g_tx_mt_skeleton_attack	= load_texture_from_file(RES_TX_MT_SKELETON_ATTACK);
	g_tx_mt_skeleton_death	= load_texture_from_file(RES_TX_MT_SKELETON_DEATH);
	g_tx_mt_skeleton_walk	= load_texture_from_file(RES_TX_MT_SKELETON_WALK);
}

void handle_event()
{
	SDL_Event e;
	
	while (SDL_PollEvent(&e) != 0)
	{		
		switch (e.type)
		{
		case SDL_QUIT:
		{
			is_game_running = 0;
			break;
		}
		}
	}
}

void update()
{
	float delta = (SDL_GetTicks() - last_frame_time) / 1000.f;
	last_frame_time = SDL_GetTicks();


}

void render()
{
	SDL_RenderClear(g_renderer);

	SDL_RenderCopy(g_renderer, g_tx_map_background, NULL, NULL);

	SDL_RenderPresent(g_renderer);
}

void run_game()
{
	while (is_game_running)
	{
		handle_event();

		update();

		render();
	}
}

void terminate_game()
{
	SDL_DestroyRenderer(g_renderer);
	g_renderer = NULL;

	SDL_DestroyWindow(g_window);
	g_window = NULL;

	SDL_Quit();
}