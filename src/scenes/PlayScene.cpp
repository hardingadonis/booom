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
	if (this->m_tower->GetOrigin().y + 100 < this->m_player->GetOrigin().y)
	{
		this->m_tower->Render(renderer);
		this->m_player->Render(renderer);
	}
	else
	{
		this->m_player->Render(renderer);
		this->m_tower->Render(renderer);
	}
}