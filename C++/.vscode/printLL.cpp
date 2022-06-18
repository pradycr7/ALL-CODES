// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;
 
class node {
public:
    int data;
    node* link;
};
node* A=NULL;

void insertbegin(int x)
{
node* temp=new node();
temp ->data=x;
temp ->link=A;
A=temp;
}
 

void printlist()
{
    node* temp=A;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
 

int main()
{
  int n,i,x;
  cout<<"enter the number of nodes"<<endl;
  cin>>n;
  for ( i = 1; i <= n; i++)
  {
      cout<<"enter the number"<<endl;
      cin>>x;
      insertbegin(x);

  }
  printlist();
    
   
 
    
 
    return 0;
}