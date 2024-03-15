#pragma once

#include <Config.hpp>
#include <scenes/BaseScene.hpp>

class Game
{
private:
	SDL_Window*		m_window;
	SDL_Renderer*	m_renderer;

	BaseScene*		m_scene;
	bool			m_isRunning;

public:
	Game();
	~Game();

	void Run();

	void SetScene(BaseScene* scene);

	static Game* GetInstance();

private:
	void Initialize();

	void Terminate();
};