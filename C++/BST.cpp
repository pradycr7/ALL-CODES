#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

};
 struct node* root=NULL;


void insert(int x)
{
    node* temp = new node();
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    if (root==NULL)
    {
        root=temp;
        return;
    }
    struct node* temp1=root;
    while (temp1->left==NULL && temp1->right==NULL )
    {
        if (x<temp1->data)
        {
           temp1=temp1->left;

        }
        else
        {
            temp1=temp1->right;
        }


        
    }
    if (x<temp1->data)
    {
        temp1->left=temp;
    }
    else
    {
        temp1->right=temp;
    }
    
    
    
    
}

int FindMin(node* root)
{
    if(root==NULL)
    {
        cout<<"error : tree is empty"<<endl;
        return -1;
    }
    while(root->left==NULL)
    {
        root=root->left;
    }
    return root->data;
}

int FindMax(node* root)
{
    if(root==NULL)
    {
        cout<<"error : tree is empty"<<endl;
        return -1;
    }
    while(root->right==NULL)
    {
        root=root->right;
    }
    return root->data;
}



int main()
{
    insert(15);
    insert(10);
    insert(14);
    insert(12);
    insert(11);



    
return 0;
}