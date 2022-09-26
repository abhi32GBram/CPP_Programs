#include <iostream>

using namespace std;


class Node 
{
public:

	int Value;
	Node* Next;

};

void display_LinkedList(Node*n) 
{
	// UNTILTHE POINTER ADDRESS IS NULL THE WHILE LOOP KEEPS RUNNING 
	while (n != NULL ) 
	{
		cout << n->Value << endl;
		// AFTER CHECKING THE VALUE OF THE HEAD ---> N CHECKS FOR THE VALUE OF THE NEXT POINTER GIVEN BY '->NEXT'
		n = n->Next;
	}
}

// PERFORMING OPERTATIONS ON LINKED LIST 
void insertAtFront(Node** head, int newValue)
{
	// MAKING A NEW NODE TO BE INSERTED 
	Node* newNode = new Node();
	newNode->Value = newValue;

	// PUTTING THE NEW NODE IN FRONT OF THE CURRENTLY EXISTING HEAD 
	newNode->Next = *head;

	// MOVING THE HEAD OF THE LIST TO POINT TO  THE NEW NODE 
	*head = newNode;
}
void insertAtEnd(Node** head, int newValue)
{
	// MAKING A NEW NODE TO BE INSERTED 
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = NULL;

	//MAKIGN SURE THE LINKED LIST ISNT EMPTY WHEN A NE WNODE IS ADDED AT THE END
	// AND IF SO THE NEW 'END' ELEMENT IS HEAD OF THE LINKED LIST  
	if (*head == NULL) 
	{
		*head = newNode;
		return;
	}

	// FINDING THE LAST NODE OF THE LL BY REFERCING THE POINTERS FROM HEAD 
	Node* last = *head;
	while (last->Next != NULL) 
	{
		last = last->Next;
	}

	// INSERTING  THE NEW NODE FROM THE USER AT THE END OF THE EXISTING LINKED LIST 
	last->Next = newNode;





}
void inserAfter(Node*previous,int newValue)
{
	// CHECKING IF THE PREVIOUS NODE IN THE LL IS NULL OR NOT 
	if (previous == NULL) 
	{
		cout << "PREVIOUS ELEMENT CANT BE NULL !! ";
	}

	// MAKING A NEW NODE TO BE PUT BETWEEN 2 NODES 
	Node* newNode = new Node();
	newNode->Value = newValue;

	// MAKING THE NEW CONNECTION BETWEEN FORTH-PREVIOUS AND THE NEW ELEMENT && DELETING THE CONNECTION BETWEEN      PREVIOUS-FORTH
	newNode->Next = previous->Next;
	previous->Next = newNode;
}

int main_LL()
{

	// MAKING A HEAD NODE MANDATORILY TO INITIALIZE THE LINKED LIST
	Node* head=new Node();

	// MAKING ITS FOLLWIONG NODES NAMELY - SECOND AND THIRD 
	Node* second = new Node();
	Node* third = new Node();

	// CONNECTING THE NODES TO THE POINTER OF THE NEXT NODE 
	head->Value = 1;
	head->Next = second;

	second->Value = 2;
	second->Next = third;

	// FINAL NODE WILL HAVE THE ->NEXT VALUE OF 'NULL' TO MARK THE END OF THE LINKED LIST 
	third->Value = 3;
	third->Next = NULL; 

	// THE NEW-EST VALUE THAT WILL BE ADDED WILL BE THE ONE ADDED IN THE END OF BY THE USER 
	insertAtFront(&head, 10000);
	insertAtFront(&head, 145);
	insertAtFront(&head, 167);
	
	// THE NEW ELEMENT ENTERED WILL BE DISPLAYED AT THE END OF THE LINKED LIST 
	insertAtEnd(&head, 12);

	// THE NEW ELEMENT WILL BE EENTERERD BETWEEN 2 PARTTICAULAR NODES 
	inserAfter(head, 69420);

	//DISPLAY FUNCTION TO DISPLAY THE PROCESSED OPERATOINS ON THE LINKED LIST 
	display_LinkedList(head);


	return 0;
	system("pause>0");
}

// RANDOM ACCESS  INSN'T POSSIBLE IE. YOU CANT ACCCESS A PARTICULAR ELEMENT IN A LL 
// LL REQUIRES  MORE MEMORY COMPARED TO AN ARRAY AS IT STORES -->  A VALUE AND POINTER OF THE NEXT ELEMEMNT.
