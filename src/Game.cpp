#include <Game.hpp>
#include <Resource.hpp>
#include <scenes/MenuScene.hpp>

static Game* g_game = nullptr;

Game::Game()
{
	this->Initialize();
}

Game::~Game()
{
	this->Terminate();
}

void Game::Initialize()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		exit(EXIT_FAILURE);
	}

	if (IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG) < 0)
	{
		exit(EXIT_FAILURE);
	}

	if (TTF_Init() < 0)
	{
		exit(EXIT_FAILURE);
	}

	if ((Mix_Init(MIX_INIT_WAVPACK | MIX_INIT_MP3) < 0) || (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0))
	{
		exit(EXIT_FAILURE);
	}

	this->m_window = SDL_CreateWindow(
		WINDOW_TITLE,
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_SHOWN
	);

	if (this->m_window == nullptr)
	{
		exit(EXIT_FAILURE);
	}

	this->m_renderer = SDL_CreateRenderer(this->m_window, -1, SDL_RENDERER_PRESENTVSYNC);

	if (this->m_renderer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	this->m_isRunning = true;

	Resource::LoadAllData(this->m_renderer);

	this->SetScene(new MenuScene());
}

void Game::Run()
{
	int last_frame_time = 0;

	while (this->m_isRunning)
	{
		// Handle event
		SDL_Event e;
		while (SDL_PollEvent(&e) != 0)
		{
			switch (e.type)
			{
			case SDL_QUIT:
			{
				this->m_isRunning = false;
				break;
			}
			}
			this->m_scene->HandleEvent(e);
		}

		// Update
		float delta = (SDL_GetTicks() - last_frame_time) / 1000.f;
		this->m_scene->Update(delta);
		last_frame_time = SDL_GetTicks();

		// Render
		SDL_SetRenderDrawColor(this->m_renderer, 0, 0, 0, 255);
		SDL_RenderClear(this->m_renderer);

		SDL_RenderCopy(this->m_renderer, Resource::TX_MAP_BACKGROUND, nullptr, nullptr);
		this->m_scene->Render(this->m_renderer);

		SDL_RenderPresent(this->m_renderer);
	}
}

void Game::Quit()
{
	this->m_isRunning = false;
}

void Game::SetScene(BaseScene* scene)
{
	delete this->m_scene;

	this->m_scene = scene;
}

void Game::Terminate()
{
	IMG_Quit();
	TTF_Quit();
	Mix_Quit();

	SDL_DestroyRenderer(this->m_renderer);
	this->m_renderer = nullptr;

	SDL_DestroyWindow(this->m_window);
	this->m_window = nullptr;

	SDL_Quit();
}

Game* Game::GetInstance()
{
	if (g_game == nullptr)
	{
		g_game = new Game();
	}

	return g_game;
}