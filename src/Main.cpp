#include <Config.hpp>
#include <Game.hpp>

int main(int argc, char* argv[])
{
	Game::GetInstance()->Run();

	return EXIT_SUCCESS;
}