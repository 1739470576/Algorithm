#include <iostream>
#include "linkedListClass.h"
using namespace std;

numList::numList(){
	head = NULL;
}

numList::~numList(){
}

void numList::addItem(int number){
	Item* curr = new Item;
	curr->num = number;
	curr->next = head;
	head = curr;
}

void numList::print(){
	Item* curr = head;
	for (; curr != NULL; curr=curr->next)
		cout << curr->num << " ";
	cout << endl;
	return;
}
