# Dino Gun

[![Build Dino Gun](https://github.com/hardingadonis/dino-gun/actions/workflows/build.yml/badge.svg)](https://github.com/hardingadonis/dino-gun/actions/workflows/build.yml)
![GitHub contributors](https://img.shields.io/github/contributors/hardingadonis/dino-gun)
![GitHub top language](https://img.shields.io/github/languages/top/hardingadonis/dino-gun)
![GitHub repo size](https://img.shields.io/github/repo-size/hardingadonis/dino-gun)
![GitHub License](https://img.shields.io/github/license/hardingadonis/dino-gun)

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

## Contributors:

<a href="https://github.com/hardingadonis/dino-gun/graphs/contributors">
    <img src="https://contrib.rocks/image?repo=hardingadonis/dino-gun" />
</a>

## Licenses:

- [Dino Gun](https://github.com/hardingadonis/dino-gun) is under the [MIT license](https://github.com/hardingadonis/dino-gun/blob/main/LICENSE).
