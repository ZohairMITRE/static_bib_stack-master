#pragma once
class node     //c'est la classe qui siginfie l'element suivant  
{
	friend class stack; //la claas stack est amie de la classe node donc stack peut acceder a les elements de node 
						//mais node ne peut pas acceder a les elements de la classe stack
	//friend void push(int*);  ---> a ce cas la seulement la methode push peut acceder a les element de la classe node 
private:
	int* data;
	node* next;

};

