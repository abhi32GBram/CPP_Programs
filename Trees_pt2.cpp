// C++ PROGRAM FOR DIFFERENT TREE TRAVERSALS
#include <iostream>
using namespace std;

/* A BINARY TREE NODE HAS DATA, POINTER TO LEFT CHILD
AND A POINTER TO RIGHT CHILD */
struct Node {
	int data;
	struct Node* left, * right;
};

// UTILITY FUNCTION TO CREATE A NEW TREE NODE
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

/* GIVEN A BINARY TREE, PRINT ITS NODES IN PREORDER*/
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	/* FIRST PRINT DATA OF NODE */
	cout << node->data << " ";

	/* THEN RECUR ON LEFT SUBTREE */
	printPreorder(node->left);

	/* NOW RECUR ON RIGHT SUBTREE */
	printPreorder(node->right);
}

/* DRIVER CODE*/
int main_TreesPt2()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	// FUNCTION CALL
	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	return 0;
}


////--------------------------------------------
////
////// C++ program for different tree traversals
////#include <bits/stdc++.h>
////using namespace std;
////
/////* A binary tree node has data, pointer to left child
////and a pointer to right child */
////struct Node {
////	int data;
////	struct Node* left, * right;
////};
////
////// Utility function to create a new tree node
////Node* newNode(int data)
////{
////	Node* temp = new Node;
////	temp->data = data;
////	temp->left = temp->right = NULL;
////	return temp;
////}
////
/////* Given a binary tree, print its nodes according to the
////"bottom-up" postorder traversal. */
////void printPostorder(struct Node* node)
////{
////	if (node == NULL)
//		return;
//
//	// first recur on left subtree
//	printPostorder(node->left);
//
//	// then recur on right subtree
//	printPostorder(node->right);
//
//	// now deal with the node
//	cout << node->data << " ";
//}
//
///* Driver code*/
//int main()
//{
////	struct Node* root = newNode(1);
//	root->left = newNode(2);
//	root->right = newNode(3);
//	root->left->left = newNode(4);
//	root->left->right = newNode(5);
//
//	// Function call
//	cout << "\nPostorder traversal of binary tree is \n";
//	printPostorder(root);
//
//	return 0;
//}
