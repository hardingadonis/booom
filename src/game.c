#include "game.h"
#include "common.h"

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

	is_game_running = 1;
	last_frame_time = 0;

	return 0;
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
	SDL_SetRenderDrawColor(g_renderer, 0, 0, 0, 255);
	SDL_RenderClear(g_renderer);



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