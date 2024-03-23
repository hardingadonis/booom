#include <Config.hpp>
#include <scenes/PlayScene.hpp>

PlayScene::PlayScene()
{
	this->m_tower = new Tower();
	this->m_player = new Player();
	this->m_threat = Threat::Generate();
}

void PlayScene::HandleEvent(SDL_Event e)
{
}

void PlayScene::Update(float delta)
{
	this->m_tower->Update(delta);
	this->m_player->Update(delta);
	this->m_threat->Update(delta);
}

void PlayScene::Render(SDL_Renderer* renderer)
{
	this->m_threat->Render(renderer);

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