#pragma once

#include <Config.hpp>
#include <scenes/BaseScene.hpp>

class MenuScene final : public BaseScene
{
public:
	MenuScene() = default;
	~MenuScene() = default;

	void HandleEvent(SDL_Event) override;
	void Update(float) override;
	void Render(SDL_Renderer*) override;
};