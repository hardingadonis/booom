#include "config.h"
#include "game.h"

int main(int argc, char* argv[])
{
	if (initialize_game() != 0)
	{
		printf("initialize SDL2 failed!");

		return 1;
	}

	load_data_game();

	run_game();

	terminate_game();

	return 0;
}
