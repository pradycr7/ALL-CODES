#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert(int x)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }

    struct node *heady = head;
    while (heady->next != NULL)
    {
        heady = heady->next;
    }
    heady->next = temp;
}



 void reverse(struct node *current)
{
    
  
     if (current->next == NULL)
    {
        head=current;
        cout << "\n";
        return;
    }
    reverse(current->next);
    struct node* baad=current->next;
    baad->next=current;
    current->next=NULL;
    
    
}

void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main()
{
   
    
    int n,x;
    cout<<"how many elements in the linked list :"<<endl;
    cin>>n;
   
    for(int i=0;i<n;i++){
        cout<<"enter the element :"<<endl;

        cin>>x;
       
        insert(x);
    }
    print();
    cout<<endl;

    reverse(head);
    

    print();
    return 0;
}