#include "pch.h"
#include "stack.h"
#include <assert.h>
#include <string>
#include <iostream>
using namespace std;
int stack::taille_max = 10;
stack::stack() {
	this->head = 0; //le head par default se point par 0 ou par le null (le vide)
}
stack::stack(node* top) {
	this->head = top;
}

void stack::push(int* d)
{
	assert(!this->pleine());//tester l'espace de creation du node s'il existe de place sur la pile
	node* n = new node;     //creation d'une node ou d'un nv element
	assert(n != 0);         //tester si la node est creer ou non donc est ce q'il point vers quelque chose ou vers 0
	n->data = d;
	n->next = this->head;
	this->head = n;
	this->taille++;
}

void stack::pop()
{
	assert(!this->empty());
	node* supp = this->head;
	this->head = supp->next;
	delete supp;
	this->taille--;
}

bool stack::empty() const
{
	if (taille == 0) //ou if(this->head==0)
		return true;
	return false;
}

void stack::print_sommet() const
{
	cout << *(this->head->data) << endl;
}

void stack::m_print()
{
	stack stack2 = this->head;
	stack2.head = this->head;
	while (!stack2.empty()) {
		stack2.print_sommet();//afficher node
		stack2.pop(); //supprimer node 
	}

}

bool stack::pleine() const
{
	if (taille == stack::taille_max)
		return true;
	return false;
}
