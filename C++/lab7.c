#include <stdio.h>
#include <stdlib.h>
struct node
{
 struct node *prev ;
 int info ;
 struct node *next ;
};

struct node *addatbeg(struct node *start , int data) {
    struct node *temp ;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->prev = NULL;
    temp->next = start ;
    start->prev = temp ;
    start = temp ;
    return start ;
}
struct node *addtoempty(struct node *start , int data) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    temp->prev = NULL;
    start = temp;
    return start ;
}
struct node addatend(struct node start , int data) {
    struct node *temp , *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data ;
    p = start ;
    while(p->next != NULL)
        p = p->next ;
    p->next = temp ;
    temp->next = NULL;
    temp->prev = p ;
    return start ;
}

void display(struct node *start) {
    struct node *p;
    if(start == NULL) {
        printf("List is empty.\n");
        return;
}
    p=start ;
    while(p!=NULL) {
        printf("%d ",p->info);
        p = p->next;
    }
}
struct node *addbefore(struct node *start,int data,int pos){
    struct node *q,*temp;
   temp =(struct node *)malloc(sizeof(struct node));
    int i;
    temp->info=data;
    q=start;
    for(i=1;i<pos;i++){
        q=q->next;
    }
    temp->prev=q->prev;
    temp->next=q;
    q->prev->next=temp;
    q->prev=temp;
    return start;
}
struct node *addafter(struct node *start , int data , int item ) {
    struct node *temp , * p ;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    p = start ;
    while(p != NULL) {
        if(p->info == item) {
            temp->prev = p ;
            temp->next = p->next ;
if(p->next != NULL)
            p->next->prev = temp;
p->next = temp ;
            return start ;
        }
        p = p->next ;
    }
    printf("%d not present in the list.\n",item);
    return start ;
 }


void search(struct node *start , int item)
{
    struct node *p = start ;
    int pos = 1 ;
    while(p!= NULL){
        if(p->info == item) {
            printf("%d found at position %d\n",item,pos);
            return ;
    }
    p=p->next;
    pos++;
}
printf("\n%d was not found in the list.\n",item);
}

struct node *delatend(struct node *start){
    struct node *temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    return start;
}
struct node *delete(struct node *start,int data){
    struct node *temp=start;
    while(temp->next!=NULL){
        if(temp->info==data){
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
            return start;
        }
        temp=temp->next;
    }
    printf("%d is not present in the list",data);
    return start;
}
struct node *delatpos(struct node *start,int pos){
    struct node *temp=start;
    int i;
    for(i=1;i<pos;i++){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    return start;
}
struct node *delafterel(struct node *start,int data){
    struct node *temp=start;
    while(temp->next!=NULL){
        if(temp->info==data){
            temp=temp->next;
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
            return start;
        }
        temp=temp->next;
    }
    printf("%d is not present in the list\n",data);
    return start;
}
struct node *rev(struct node *start){
    struct node *temp,*curr;
    temp=NULL;
    curr=start;
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    start=temp->prev;
    return start;
}
void count(struct node *start){
    struct node *p=start;
    int i=0;
    while(p!=NULL){
        ++i;
        p=p->next;
    }
    printf("Number of nodes in the doubly-linked list = %d",i);
}

void main() {
     struct node *start = NULL ;
    start = addtoempty(start,15);
    start = addatend(start,23);
    start = addatend(start,98);
    start = addatend(start,67);
    start = addatend(start,34);
    start = addatend(start,88);
    start = addatend(start,39);
    start = addatend(start,29);
    start = addatend(start,31);
    start = addatend(start,11);
    printf("Created list:\n");
    display(start);
    printf("\n\nQ1. Searching:\n");
    search(start,24);
    search(start,67);
    //Searching Over
    //Insertion of elements
    printf("\n2. Insertion-\n");
    printf("a. Insert 73 at begining-\n");
    start = addatbeg(start,73);
     display(start);
    printf("\nb. Insert 20 at end-\n");
    start = addatend(start,20);
     display(start);
    printf("\nc. Inserting 45 before 5th element-\n");
    start = addbefore(start,45,5);
     display(start);
    printf("\nd. Inserting 77 after 31-\n");
    start = addafter(start,77,31);
     display(start);
    printf("\nList after insertions:\n");
    display(start);
    //Insertion Completed
    //Deletion
    printf("\n\n3. Deletion-\n");
    printf("\na. Deletion in the begining-\n");
    struct node *temp;
   temp = start ;
   start = start->next ;
   start->prev = NULL ;
  free(temp);
//First element deleted
    display(start);
    printf("\nb. Deletion at the end-\n");
    start=delatend(start);
    display(start);
    printf("\nc. Deletion of an item 29-\n");
    start = delete(start,29);
    display(start);
     printf("\nd. Deletion at a position 5-\n");
    start = delatpos(start,5);//deleting 5th element
    display(start);
    printf("\ne. Deletion before a position 6-\n");
    start = delatpos(start,6-1);//deleting element before 6th one
    display(start);
    printf("\nf. Deletion after an element 20-\n");
    start=delafterel(start,20);
    display(start);
    printf("\nList after deletion:\n");
    display(start);
   // Reversing
   start=rev(start);
   printf("\n\nQ4.Reverse the doubly linked list:\n");
    printf("List after reversing:\n");
    display(start);
    printf("\n\nQ5. Display no of nodes in the modified list\n");
    count(start);
}
