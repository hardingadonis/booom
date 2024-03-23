#include <Config.hpp>
#include <scenes/PlayScene.hpp>

PlayScene::PlayScene() :
	m_elapsedTime(0.f)
{
	this->m_tower = new Tower();
	this->m_player = new Player();
}

void PlayScene::HandleEvent(SDL_Event e)
{
}

void PlayScene::Update(float delta)
{
	this->m_elapsedTime += delta;

	if (this->m_elapsedTime > 1.2f)
	{
		this->m_threats.push_back(Threat::Generate());

		this->m_elapsedTime = 0.f;
	}

	this->m_tower->Update(delta);
	this->m_player->Update(delta);

	for (auto threat : this->m_threats)
	{
		threat->Update(delta);
	}
}

void PlayScene::Render(SDL_Renderer* renderer)
{
	for (auto threat : this->m_threats)
	{
		threat->Render(renderer);
	}

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