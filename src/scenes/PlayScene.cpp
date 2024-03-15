#include <Config.hpp>
#include <scenes/PlayScene.hpp>

PlayScene::PlayScene()
{
	this->m_tower = new Tower();
}

void PlayScene::HandleEvent(SDL_Event e)
{
}

void PlayScene::Update(float delta)
{
	this->m_tower->Update(delta);
}

void PlayScene::Render(SDL_Renderer* renderer)
{
	this->m_tower->Render(renderer);
}