#include<iostream>
#include<SDL.h>
const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIHGT = 640;
int main(int argc, char* argv[]) {
	
	SDL_Window* window = SDL_CreateWindow("hehe", 100, 100, WINDOW_WIDTH, WINDOW_HEIHGT, SDL_WINDOW_SHOWN);
	SDL_Delay(2000);

	return 0;
}