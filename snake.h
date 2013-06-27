#include "node.h"
#ifndef SNAKE_H_
#define SNAKE_H_

class snake{

  private:
		node* head;
		node* tail;

	public:
		snake();          //Default constr, sets # of nodes to 1
		void push_back(); //Pushes back a single node
		void pop_back();  //Deletes back end of snake
		void move_snake();//Moves the snake
		void draw_snake();//Draws the snake on the screen

};

#endif SNAKE_H_
