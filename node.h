#ifndef NODE_H_
#define NODE_H_

//Node for the class 
class node{
  friend class snake;

	private:
		node* next;
		int data;
	public:
		node() : next(NULL), data(1) {}
		node(int d) : next(NULL), data(d) {}
};

#endif NODE_H_
