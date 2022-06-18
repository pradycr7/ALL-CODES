#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};
node *head;

node *getnewnode(int x)
{
    node *newnode = new node();
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void insertathead(int x)
{
    node* newnode = getnewnode(x);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head =newnode;
}

void insertattail(int x)
{
    node* newnode = getnewnode(x);
    node* temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;
}

void print()
{
    node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void reverseprint()
{
    node* temp;
    temp=head;
    if(temp==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }

}


int main()
{
    head=NULL;
    node* temp=new node();
    temp->data=2;
    temp->prev=NULL;
    temp->next=NULL;
    head=temp;
    insertathead(3);
    insertattail(5);
    print();
    reverseprint();
    return 0;

}