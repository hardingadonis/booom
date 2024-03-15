#include <objects/Tower.hpp>
#include <Resource.hpp>

Tower::Tower() :
	AnimatedObject(11, 0.02f)
{
	this->m_texture = Resource::TX_MAP_TOWER;

	this->m_rectSrc = new SDL_Rect();
	this->m_rectSrc->w = 100;
	this->m_rectSrc->h = 140;

	this->m_rectDst = new SDL_Rect();
	this->m_rectDst->w = 300;
	this->m_rectDst->h = 420;
}

void Tower::Update(float delta)
{
	this->UpdateAnimation(delta);
}

void Tower::Render(SDL_Renderer* renderer)
{
	SDL_RenderCopy(renderer, this->m_texture, this->m_rectSrc, this->m_rectDst);
}