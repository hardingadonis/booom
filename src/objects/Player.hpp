#pragma once

#include <Config.hpp>
#include <objects/AnimatedObject.hpp>
#include <objects/Gun.hpp>

class Player final : public AnimatedObject
{
private:
	int				m_speed;
	Gun*			m_gun;

public:
	Player();
	~Player() = default;

	void Update(float) override;
	void Render(SDL_Renderer*) override;
};