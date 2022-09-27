#include<iostream>
using namespace std;


class Node 
{
public:
	int value;
	Node* next;
	Node* previous;

};
int main_doubleLL()
{
	// CREATING THE BEGINNING AND THE END POINT- POINTERS OF THE LNKED LIST 
	Node* head;
	Node* tail;

	//CREATING A NEW NODE TO INITIALIZE THE LL 
	Node* node = new Node();

	// GIVING NODE A VALUE OF 4 
	node->value = 4;

	// MAKING THE NEXT NODE POINTER AS NULL 
	node->next = nullptr;
	node->previous = nullptr;
	
	// COMMANDING FOR THE HEAD AND TAIL OF THE LL TO BE THE SAME
	head = node;
	tail = node;

	// ---------------------------------------------

	// MAKING A NEW NODE AFTER THE HEAD NODE
	node = new Node();
	

	return 0;
	system("pause>0");

}

// 2X-LL  ARE BIDIRECTIONAL IN NATURE 
// 2X-LL CAN HAVE NEW ELEMENTS IN :- FRONT,BACK,AFTER A NODE, BEFORE A NODE.
// 2X-LL HAVE THE POINTER FOR THE FIRST AND PREVIOUS ELEMENT 
