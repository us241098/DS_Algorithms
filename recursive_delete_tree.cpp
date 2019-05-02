   
#include<bits/stdc++.h>  
#include<iostream> 
using namespace std;  
  
struct node  
{  
    int data;  
    node* left;  
    node* right;  
      
};  

//function to create a node
node* newNode(int data){
	node* Node= new node();
	Node->data=data;
	Node->left=NULL;
	Node->right=NULL;

	return Node;
}
  
  

void deleteTree(node* node)  
{  
    if (node == NULL) return;  
  

    deleteTree(node->left);  
    deleteTree(node->right);  
      

    cout << "\n Deleting node: " << node->data;  
    free(node);  
}  
  
  
int main()  
{  
    node *root = newNode(1);  
    root->left     = newNode(2);  
    root->right     = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
      
    deleteTree(root);  
    root = NULL;  
  
    cout << "\n Tree deleted ";  
      
    return 0;  
}  
