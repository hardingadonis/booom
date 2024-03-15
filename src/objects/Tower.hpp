#pragma once

#include <Config.hpp>
#include <objects/AnimatedObject.hpp>

class Tower final : public AnimatedObject
{
private:

public:
	Tower();

	void Update(float) override;

	void Render(SDL_Renderer*) override;
};