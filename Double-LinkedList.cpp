#include<iostream>
using namespace std;


class Node 
{
public:
	int value;
	Node* next;
	Node* previous;

};

// TRAVERSING THE NODES 


// DISPLAYING THE VALUES OF THE NODES FROM THE HEAD TO THE LAST ELEMETN OF THE LINKED LIST 
void display_HeadToTail(Node* head) 
{
	Node* traverser = head;
	while (traverser != nullptr) 
	{
		cout << traverser->value << endl;
		traverser = traverser->next;
	}
}
// DISPLAYING THE VALUES OF THE NODES FROM TAIL TO THE HEAD OF THE LINKED LIST 

void display_TailToHead(Node* tail)
{
	Node* traverser = tail;
	while (traverser != nullptr)
	{
		cout << traverser->value << endl;
		traverser = traverser->previous;
	}	
}
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

	// MAKING A NEW NODE AFTER THE HEAD NODE (SAME CODE CAN BE USED TO MAKE THE FOLLWING NODES)
	node = new Node();
	node->value = 5;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;

	// ADDING A NEW NODE BY REUSING THE CODE ABOVE : 
	node = new Node();
	node->value = 6;
	node->next = nullptr;
	node->previous = tail;
	tail->next = node;
	tail = node;

	// CALLING THE FUNCTION TO PRINT THE HED TO TAIL TRAVERSAL 
	cout << "FROM HEAD OT TAIL : \n";
	display_HeadToTail(head);

	cout << "-------------------------------" << endl;

	//CALLING THE FUNCTION TO PRINT THE TAIL TO HEAD TRAVERSAL 
	cout << " FROM TAIL TO HEAD :\n";
	display_TailToHead(tail);

	return 0;
	system("pause>0");

}

// 2X-LL  ARE BIDIRECTIONAL IN NATURE 
// 2X-LL CAN HAVE NEW ELEMENTS IN :- FRONT,BACK,AFTER A NODE, BEFORE A NODE.
// 2X-LL HAVE THE POINTER FOR THE FIRST AND PREVIOUS ELEMENT 
