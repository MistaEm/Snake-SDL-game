#ifndef NODE_H_
#define NODE_H_

//Node for the class 
class node{
	friend class map;

	private:
		node* next;
		SDL_Rect body;

	public:
		node() : next(NULL) {body.h = 15, body.w = 15,
							 body.x = 390, body.y = 290;}
};

#endif NODE_H_
