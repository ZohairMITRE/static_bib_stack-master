#pragma once
#include "node.h"
class stack
{
	stack();
	stack(node*);
	//service
	void push(int*);
	void pop();
	bool empty() const;
	void print_sommet() const;
	void m_print();
	bool pleine()const;
private:
	node* head;
	static int taille_max;
	int taille = 0;
};

