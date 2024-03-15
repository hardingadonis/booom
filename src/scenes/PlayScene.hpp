#pragma once

#include <Config.hpp>
#include <scenes/BaseScene.hpp>

class PlayScene final : public BaseScene
{
public:
	PlayScene() = default;
	~PlayScene() = default;

	void HandleEvent(SDL_Event) override;
	void Update(float) override;
	void Render(SDL_Renderer*) override;
};