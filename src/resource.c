#include "resource.h"

//SDL_Renderer* g_renderer;

SDL_Texture* load_texture_from_file(const char* path)
{
	SDL_Texture* texture = IMG_LoadTexture(g_renderer, path);

	printf("Loaded texture from %s\n", path);

	return texture;
}