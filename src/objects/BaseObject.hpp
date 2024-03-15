#pragma once

#include <Config.hpp>

class BaseObject
{
protected:
	SDL_Texture*	m_texture;
	SDL_Rect*		m_rectSrc;
	SDL_Rect*		m_rectDst;

public:
	BaseObject() = default;
	~BaseObject() = default;

	virtual void Update(float) = 0;

	virtual void Render(SDL_Renderer*) = 0;

	void SetRectDst(SDL_Rect rect);
};