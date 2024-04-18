#pragma once

#include <Config.hpp>
#include <scenes/BaseScene.hpp>
#include <components/Text.hpp>
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
	int						m_score;
	Text*					m_scoreText;
	float					m_spawnTime;
	int						m_level;

public:
	PlayScene();
	~PlayScene() = default;

	void HandleEvent(SDL_Event) override;
	void Update(float) override;
	void Render(SDL_Renderer*) override;

	void UpdateLevel();
};