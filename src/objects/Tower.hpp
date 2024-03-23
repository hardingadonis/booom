#pragma once

#include <Config.hpp>
#include <components/HP.hpp>
#include <objects/AnimatedObject.hpp>

class Tower final : public AnimatedObject, public HP
{
private:

public:
	Tower();

	void Update(float) override;
};