#include <misc/Random.hpp>
#include <random>

std::random_device rd;
static std::mt19937 s_generator(rd());

int Random::RandomInt(int min, int max)
{
	std::uniform_int_distribution<> dis(min, max);

	return dis(s_generator);
}

bool Random::RandomBool()
{
	std::uniform_int_distribution<> dis(0, 1);

	return dis(s_generator) == 1;
}