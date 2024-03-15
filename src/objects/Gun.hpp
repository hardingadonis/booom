#pragma once

#include <Config.hpp>
#include <objects/BaseObject.hpp>

class Gun : public BaseObject
{
private:

public:
	Gun();
	~Gun() = default;

	void Update(float) override;
};