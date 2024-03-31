# Dino Gun

> A simple game made with C++ & SDL2

## Requirements

- C++ 17
- SDL2, SDL2_image, SDL2_ttf, SDL2_mixer
- CMake
- Ninja

## Build

- Clone the repository

```bash
git clone https://github.com/hardingadonis/dino-gun.git --recursive
```

- Create a build directory

```bash
cd dino-gun
mkdir build
cd build
```

- Install dependencies

```bash
sudo apt-get install libsdl2-dev libsdl2-image-dev libsdl2-ttf-dev libsdl2-mixer-dev ninja-build
```

- Build the project

```bash
cmake .. -DCMAKE_BUILD_TYPE=MinSizeRel -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -G Ninja
cmake --build .
cmake --install .
```

- Run the game

```bash
./dino-gun
```
