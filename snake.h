#include "node.h"
#ifndef SNAKE_H_
#define SNAKE_H_

class snake{
	friend class map;
	private:
		node* head;
		node* tail;

	public:
		snake();          //Default constr, sets # of nodes to 1
		void push_back(); //Pushes back a single node
		void pop_back();  //Deletes back end of snake
		//node* get_head();

};

#endif SNAKE_H_
