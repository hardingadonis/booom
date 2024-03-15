#include <Config.hpp>
#include <scenes/PlayScene.hpp>

PlayScene::PlayScene()
{
	this->m_tower = new Tower();
	this->m_player = new Player();
}

void PlayScene::HandleEvent(SDL_Event e)
{
}

void PlayScene::Update(float delta)
{
	this->m_tower->Update(delta);
	this->m_player->Update(delta);
}

void PlayScene::Render(SDL_Renderer* renderer)
{
	this->m_tower->Render(renderer);
	this->m_player->Render(renderer);
}