#include "config.h"
#include "game.h"
#include "scenes/menu_scene.h"

int main(int argc, char* argv[])
{
	if (initialize_game() != 0)
	{
		printf("initialize SDL2 failed!");

		return 1;
	}

	load_data_game();

	set_scene(menu_scene_handle_event, menu_scene_update, menu_scene_render);

	run_game();

	terminate_game();

	return 0;
}
