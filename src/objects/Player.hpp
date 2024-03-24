#pragma once

#include <Config.hpp>
#include <objects/AnimatedObject.hpp>
#include <objects/Gun.hpp>
#include <objects/Bullet.hpp>

class Player final : public AnimatedObject
{
private:
	int				m_speed;
	Gun*			m_gun;

	bool			m_isShotable;
	float			m_elapsedTime;

public:
	Player();
	~Player() = default;

	void Update(float) override;
	void Render(SDL_Renderer*) override;

	bool IsShotable() const;

	Bullet* Shot();
};