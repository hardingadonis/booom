#pragma once

#include <Config.hpp>
#include <scenes/BaseScene.hpp>
#include <objects/Tower.hpp>
#include <objects/Player.hpp>

class PlayScene final : public BaseScene
{
private:
	Tower*			m_tower;
	Player*			m_player;

public:
	PlayScene();
	~PlayScene() = default;

	void HandleEvent(SDL_Event) override;
	void Update(float) override;
	void Render(SDL_Renderer*) override;
};