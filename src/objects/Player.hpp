#pragma once

#include <Config.hpp>
#include <components/Damage.hpp>
#include <objects/AnimatedObject.hpp>
#include <objects/Gun.hpp>

class Player final : public AnimatedObject, public Damage
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