#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert(int x,int n)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return ;
    }
    
    struct node* heady=head;
     for(int i=1; i<=(n-2); i++){
        heady=heady->next;
    }
    temp->next=heady->next;
    heady->next=temp;
 
    
}
void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
   head=NULL; 
    int a = 2, b = 3, c = 4;

    struct node* temp=new node();
    head = temp;
    temp->data=a;
    temp->next=NULL;

    struct node* temp1=new node();
    temp->next = temp1;
    temp1->data=b;

    struct node* temp2=new node();
    temp1->next = temp2;
    temp2->data=c;
    temp2->next=NULL;

    int x, n;

    cout << "enter the element to be inserted :" << endl;
    cin >> x;

    cout << "enter the position where element to be entered :" << endl;
    cin >> n;

    insert(x, n);

    print();
    return 0;
}