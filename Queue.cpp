#include<iostream>
#include <queue>

using namespace std;

// FUNCTOIN CREATED TO DISPLAY THE WHOLE QUEUE
void display_Queue(queue<int> queue) 
{
	while (!queue.empty())
	{
		cout << queue.front() << " ";
			queue.pop();
	}		
	cout << endl;
}
int main_queue()
{
	// MAKING A QUEUE 
	queue<int>myQ;

	// ADDING OR 'PUSHING' ELEMENTS IN THE QUEUE
	myQ.push(1);
	myQ.push(2);
	myQ.push(3);

	cout << "THE QUEUE IS : ";
	display_Queue(myQ);

	// .SIZE() DISPLAYS THE SIZE OF THE QUEUE 
	cout << "\nSIZE OF THE QUEUE IS : " << myQ.size() << endl;

	// .FRONT() DISPLAYS THE FIRST ELEMENT OF THE QUEUE
	cout << "\nFIRST ELEMENT OF THE QUEUE IS : " << myQ.front() << endl;

	// .BACK() DISPLAYS THE LAST ELEMENT IF THE QUEUE
	cout << "\nLAST ELEMENT OF THE QUEUE IS : " << myQ.back() << endl;

	system("pause>0");

	return 0;
}

// FOLLOWS A FIFO STRUCTURE(FIRST IN -FIRST OUT) OR FIRST COME FIRST SERVE 
// QUEUE'S CAN BE USED IN - PRINTER , PRINTER IS SLOW BUT STILL EACH PAGE WAITS FOR ITS TURN TO BE PRINTED
//-------------------------------------------------------------

// PROGRAM FOR SHOWING ATHE DAILY TASKS USING QUEUE
// 
//void printQueue(queue<string>queue) {
//    cout << "List of all tasks are as follows: " << endl;
//    while (!queue.empty())
//    {
//
//        cout << queue.front() << endl;
//        queue.pop();
//    }
//
//    cout << "All tasks are completed!";
//
//}
//int main(int argc, char const* argv[])
//{
//    queue<string>myPendingTasks;
//
//    myPendingTasks.push("Wake up early at 5:00 A.M");
//    myPendingTasks.push("Do yoga at 6:00 A.M");
//    myPendingTasks.push("Go for jogging at 7:00 A.M");
//    myPendingTasks.push("Go to office at 9:00 A.M");
//    myPendingTasks.push("Have lunch at 1:00 P.M");
//    myPendingTasks.push("Run errands at 5:00 P.M");
//
//    cout << " Total tasks to do are " << myPendingTasks.size() << endl;
//    cout << " My first task is " << myPendingTasks.front() << endl;
//    cout << " My last task is " << myPendingTasks.back() << endl;
//
//    printQueue(myPendingTasks);
//
//
//    return 0;
//}
