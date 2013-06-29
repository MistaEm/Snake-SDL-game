#include "map.h"
#include "SDL.h"
#include "snake.h"

//Sets the screen value, and calls default constr of snake
map::map()
:screen(SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE)), curr_snake()
{}

void map::run()
{
	//Loads misc. data of screen
	loadScreen();

	bool running = true;
	//Run loop
	
	while(running)
	{
		SDL_PollEvent(&occur);

		if(occur.type == SDL_QUIT)
		{
			running = false;
		}

		SDL_FillRect(screen, 0, NULL); //Update screen
		drawBody(); //Draws the snake
	}
	SDL_Quit();
}

void map::playerMov()
{
	Uint8 *keystates = SDL_GetKeyState(NULL);

	if(keystates[SDLK_UP])
	{
		drawBody();
	}
	if(keystates[SDLK_DOWN])
	{

	}
	if(keystates[SDLK_LEFT])
	{

	}
	if(keystates[SDLK_RIGHT])
	{

	}
}

void map::loadScreen()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_WM_SetCaption("Snake!", NULL);

}

void map::drawBody()
{
	Uint32 white = SDL_MapRGB(screen->format, 255, 255, 255);

	node* tmp = curr_snake.head;

	SDL_FillRect(screen, &tmp->body, white);

	SDL_Flip(screen);
}

