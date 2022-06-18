#include<iostream>
using namespace std;

struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

bool isBST(BstNode* root)
{
    if(root->left == NULL && root->right == NULL)
    {
        return true;
    }
    BstNode* tempL =root->left;
    BstNode* tempR =root->right;
    
    if(tempL->data<=root->data && tempR->data > root->data)
    {
        isBST(root->left);
        isBST(root->right);
        return true;
    }
    else
    return false;
}


int main() {
	BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

/* 
    if(isBST(root))
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
 */
int x=isBST(root);
cout<<x;
	return 0;
}