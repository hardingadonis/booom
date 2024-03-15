#include <objects/BaseObject.hpp>

void BaseObject::SetRectDst(SDL_Rect rect)
{
	if (m_rectDst != nullptr)
	{
		m_rectDst->x = rect.x;
		m_rectDst->y = rect.y;
		m_rectDst->w = rect.w;
		m_rectDst->h = rect.h;
	}
}