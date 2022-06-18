#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};
struct Node* top = NULL;

void Push(int x)
{
    struct Node* temp = new Node();

    temp -> data = x;
    temp -> link = top;
    top = temp;
    
}

void pop()
{
    struct Node *temp;
    if(top == NULL) return;
    temp = top;
    top = top -> link;
    free(temp);
}

void Print(struct Node *temp)
{

    if (temp == NULL)
    {
        cout << "\n";
        return;
    }

    cout << temp->data << " ";
    Print(temp->link);
}


int main()
{

    Push(3);
    Push(5);
    pop();
    Push(4);

    Print(top);

    return 0;
}