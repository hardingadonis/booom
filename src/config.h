#ifndef _CONFIG_H_
#define _CONFIG_H_

// Include libraries
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

#include <stdio.h>

// Define constants
#define WINDOW_WITDH					1200
#define WINDOW_HEIGHT					680
#define WINDOW_TITLE					"Dino Gun"

// Define resources path
#define RES_FONT						"res/fonts/monogram-extended.ttf"

#define RES_SFX_SHOT					"res/sfx/shot.wav"
#define RES_SFX_BACKGROUND				"res/sfx/background_music.wav"

#define RES_TX_PLAYER					"res/textures/player/dino.png"
#define RES_TX_PLAYER_GUN				"res/textures/player/gun.png"
#define RES_TX_PLAYER_BULLET			"res/textures/player/bullet.png"

#define RES_TX_MAP_BACKGROUND			"res/textures/map/background.jpg"
#define RES_TX_MAP_TOWER				"res/textures/map/tower.png"

#define RES_TX_MT_GOBLIN_ATTACK			"res/textures/monsters/goblin/attack.png"
#define RES_TX_MT_GOBLIN_DEATH			"res/textures/monsters/goblin/death.png"
#define RES_TX_MT_GOBLIN_WALK			"res/textures/monsters/goblin/walk.png"

#define RES_TX_MT_MUSHROOM_ATTACK		"res/textures/monsters/mushroom/attack.png"
#define RES_TX_MT_MUSHROOM_DEATH		"res/textures/monsters/mushroom/death.png"
#define RES_TX_MT_MUSHROOM_WALK			"res/textures/monsters/mushroom/walk.png"

#define RES_TX_MT_SKELETON_ATTACK		"res/textures/monsters/skeleton/attack.png"
#define RES_TX_MT_SKELETON_DEATH		"res/textures/monsters/skeleton/death.png"
#define RES_TX_MT_SKELETON_WALK			"res/textures/monsters/skeleton/walk.png"

#endif // _CONFIG_H_