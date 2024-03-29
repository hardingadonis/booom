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
	if (e.type == SDL_MOUSEBUTTONDOWN)
	{
		if (e.button.button == SDL_BUTTON_LEFT && this->m_player->IsShotable())
		{
			this->m_bullets.push_back(this->m_player->Shot());
		}
	}
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

	for (auto bullet : this->m_bullets)
	{
		bullet->Update(delta);
	}

	for (auto bullet : this->m_bullets)
	{
		for (auto threat : this->m_threats)
		{
			if (bullet->IsAlive() && bullet->IsCollision(threat))
			{
				threat->SetCurrentHP(threat->GetCurrentHP() - bullet->GetDamage());
				bullet->SetIsAlive(false);
			}
		}
	}

	for (int i = 0; i < this->m_threats.size();)
	{
		if (!this->m_threats[i]->IsAlive())
		{
			this->m_threats.erase(this->m_threats.begin() + i);
		}
		else
		{
			i++;
		}
	}

	for (int i = 0; i < this->m_bullets.size();)
	{
		if (!this->m_bullets[i]->IsAlive())
		{
			this->m_bullets.erase(this->m_bullets.begin() + i);
		}
		else
		{
			i++;
		}
	}
}

void PlayScene::Render(SDL_Renderer* renderer)
{
	for (auto threat : this->m_threats)
	{
		threat->Render(renderer);
	}
	for (auto bullet : this->m_bullets)
	{
		bullet->Render(renderer);
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