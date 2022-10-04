#include <iostream>
#include <stack>
#include <string>
using namespace std;

//MAKING A FUNCTION TO DISPLAY THE ELEMENTS OF THE STACK 


int main_stack() 
{
	// CREATING THE STACK
	stack<int>nunbenumberStack;

	// .push() IS USED 'PUSH' OR ADD AN ELEMENT IN THE STACK
	nunbenumberStack.push(1);
	nunbenumberStack.push(2);
	nunbenumberStack.push(3);

	// .pop() WILL REMOVE OR 'POP' THE FIRST ELEMENT OF THE STACK
	nunbenumberStack.pop();

	//CHECKING IF THE SATCK IS EMPTY OR NOT 

	if (nunbenumberStack.empty()) 
	{
		cout << "THE STACK IS EMPTY !! \n";
	}
	else
	{
		cout << "THE STACK IS NOT EMPTY !! \n";
	}


	// .size() IS USED FOR DISPLAYING THE SIZE OF THE STACK
	cout << "THE SIZE OF YOU'RE STACK IS : " << nunbenumberStack.size() << endl;

	//display_stackElements(nunbenumberStack);

	while (!nunbenumberStack.empty()) {
		cout << nunbenumberStack.top() << " " << endl;
		nunbenumberStack.pop();
	}



	return 0;
	system("pause>0");
}