#ifndef _GAME_H_
#define _GAME_H_

typedef void (*HandleEventCallback)(void*);
typedef void (*UpdateCallback)(float);
typedef void (*RenderCallback)(void*);

int initialize_game();

void load_data_game();

void set_scene(HandleEventCallback, UpdateCallback, RenderCallback);

void run_game();

void terminate_game();

#endif // _GAME_H_