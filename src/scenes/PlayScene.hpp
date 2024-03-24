#pragma once

#include <Config.hpp>
#include <scenes/BaseScene.hpp>
#include <objects/Tower.hpp>
#include <objects/Player.hpp>
#include <objects/Bullet.hpp>
#include <objects/Threat.hpp>

class PlayScene final : public BaseScene
{
private:
	Tower*					m_tower;
	Player*					m_player;
	std::vector<Threat*>	m_threats;
	std::vector<Bullet*>	m_bullets;
	float					m_elapsedTime;

public:
	PlayScene();
	~PlayScene() = default;

	void HandleEvent(SDL_Event) override;
	void Update(float) override;
	void Render(SDL_Renderer*) override;
};