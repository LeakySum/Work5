#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename Type>
class BinarySearchTree
{
public: 
	BinarySearchTree *parent; 
	Type data;
int Add(Type new_data, BinarySearchTree *&root)		
 {		
 	if (!root)		
 	{		
 		root = new BinarySearchTree;		
 		root->data = new_data;		
 		root->parent = root;		
 		return root->data;		
 	}		
 	else if (root->data > new_data) Add(new_data, root);		
 	else if (root->data < new_data) Add(new_data, root); 		
 	else return root->data;		
 }		



int print(int check1, BinarySearchTree *root)		
 {		
 	if (!root) return check1; 		
 	if (root->data == 10 ) check1 = 12;		
 	return check1;		
 }
int Search(int check2, BinarySearchTree *root)		
 {		
 	if (!root) return check2;		
  if(root->data >= 0) 		
	{ 		
 			root->data = 1;		
 		}		
return root->data;		
 }

int Deletion(int check3, BinarySearchTree *root)		
 {		
 	if (!root) return check3;		
 	cout << endl << endl << "Type the node you want to delete: "; 		
 	if (root->data == check3) 		
 		{ 		
 			cout << endl << "[-] Error: You are trying to remove the root of the tree!" << endl;		
      return 0;		
 		}		
 }		

int FreeTree(int check4, BinarySearchTree *&root)		
 {		
 	if (root != NULL)		
 	{		
 		delete root;		
		root = NULL;		
	}		
	return check4;		
}
};
