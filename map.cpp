#include "map.h"
#include "SDL.h"

map::map()
:screen(SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE))
{}

void map::run()
{

}

void map::loadScreen()
{
  SDL_Init(SDL_INIT_EVERYTHING);

	SDL_WM_SetCaption("Snake!", NULL);

}

void map::drawScreen()
{
	
}

