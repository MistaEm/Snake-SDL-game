#include "SDL.h"
#include "snake.h"

#ifndef MAP_H_
#define MAP_H_

//This class creates the map of which the game will be played on.
class map{

  private:
		SDL_Surface *screen;
		SDL_Event occur;
		SDL_Rect FirstBlock;
		snake curr_snake;

	public:
		map();
		void run();
		void loadScreen();
		void drawScreen();

};

#endif MAP_H_
