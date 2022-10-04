#include <iostream>
using namespace std;


struct Node 
{
	// MAKING 3 ELEMENTS - DATA,LEFT,RIGHT
	//DATA - THE VALUE THAT A CHILD NODE WILL HOLD 
	//LEFT - THE NODE ON LHS OF THE PARENT NODE
	//RIGHT - THE CHILD NODE ON RHS OF PARENT NODE 

	int data;
	Node* left;
	Node* right;

};

//  MAKING A FUNCTION whichASSIGNS THE POINTERS TO THE ROOT NODE AND THE CHILD NODES IE. LEFT AND RIGHT 
Node* createNode(int data) 
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr;

	return 0;
}


// MAKING A RECURSIVE FUCTION TO INVOKE THE 'PREORDER' STYLE ALGORITHM IN THE BREADTH FIRST SEARCH (BFS) IN ORDER TO TRAVERSE THE TREE.
void display_Tree(Node* root) 
{
	if (root == nullptr)return;
	{
		cout << root->data << endl;
		display_Tree(root->left);
		display_Tree(root->right);
	}
}
int main_trees() 
{

	// CONSTRUCTING THE TREE AND PUTTING VALUES 

	// LEVEL 1 (ROOT NODE)
	Node* root = createNode(1);

	// LEVEL 2 (LHS-2)(RHS 3)
	root->left = createNode(2);
	root->right = createNode(3);

	// Level 3 
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);

	// Level 4
	root->left->right->left = createNode(9);
	root->right->right->left= createNode(15);

	display_Tree(root);
	cin.get();

	return 0;
}

// TREE'S HAVE ONE STARING NODE - ROOTE NODE 
 
// THE FINAL NODE(S) OF THE TREE - LEAF NODES 

// A BINARY TREE IS A TYPE OF TREE WHERE A NODE CANT HAVE MORE THAN 2 CHILD NODES 
 
// BINARY SEARCH TREE - A TYPE OF TREE WHERE THE LHS CHILD SHOUDLD HAVE VALUE LOWER THAN THE PARENT NODE && THE RHS CHILD SHOULD HAVE A VALUE HIGHER THAN THE PARENT NODE  


//----------------------------------------------------
// TREE'S CAN BE TRAVERSED USING 2 ALGORITHMS - BREADTH FIRST SEARCH(BFS) && DEPTH FIRSR SEARCH(DFS)
//------------------------------------------------------

// EXAMPLE OF A  LEVEL 1 TREE :  

	// ROOT NODE WILL HAVE VALUE - 1 
//Node* rootNode = createNode(1);

//// LEFT NODE WILL HAVE VALUE - 2 
//rootNode->left = createNode(2);

//// RIGHT NODE WILL HAVE VALUE - 3 
//rootNode->right = createNode(3);

//// LHS CHILD OF ORIGINAL NODE WILL HAVE VALUE - 4
//rootNode->left->left = createNode(4)
