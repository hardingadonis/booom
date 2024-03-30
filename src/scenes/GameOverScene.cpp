#include <scenes/GameOverScene.hpp>
#include <Resource.hpp>

std::string toFiveDigitString(int num)
{
	std::stringstream ss;
	ss << std::setw(5) << std::setfill('0') << num;
	return ss.str();
}

GameOverScene::GameOverScene(int score) :
	m_elapsedTime(0.f)
{
	this->m_scoreStr = "Score: " + toFiveDigitString(score);

	this->m_title = new Text(Resource::FONT_96);
	this->m_title->SetPosition({ 438, 180 });

	this->m_scoreText = new Text(Resource::FONT_48);
	this->m_scoreText->SetPosition({ 492, 300 });
}

void GameOverScene::HandleEvent(SDL_Event e)
{
	if (e.type == SDL_MOUSEBUTTONDOWN)
	{
		if (e.button.button == SDL_BUTTON_LEFT && this->m_elapsedTime > 5.f)
		{
			std::cout << "haha\n";
		}
	}
}

void GameOverScene::Update(float delta)
{
	this->m_elapsedTime += delta;
}

void GameOverScene::Render(SDL_Renderer* renderer)
{
	this->m_title->RenderText(renderer, "GAME OVER");

	this->m_scoreText->RenderText(renderer, this->m_scoreStr);
}