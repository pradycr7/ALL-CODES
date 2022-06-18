#include <stdio.h>
#include <stdlib.h>
struct node
{
int info ;
struct node *link;
};

struct node* addtoempty(struct node* start , int data) 
{ 	
struct node* temp = (struct node*)malloc(sizeof(struct node)); 	
temp->info = data ; 	
temp->link = NULL ; 	
start = temp ; 	
return start; 
} 
struct node* createlist(struct node *start);
struct node* addatbeg(struct node* start , int data) ;
struct node* addatend(struct node* start , int data) ;
void display(struct node *start) ;
void deleteNode(struct node* start, int position);

struct node* createlist(struct node *start)
{ 
int i,data ; 	
start= addtoempty(start,15);
start = addatend(start,23);
start = addatend(start,98);
start = addatend(start,67);
start = addatend(start,34);
start = addatend(start,88);
start = addatend(start,39);
start = addatend(start,29);
start = addatend(start,31);
start = addatend(start,11);
return start; 
} 
struct node* addatend(struct node* start , int data) 
{ 	
struct node *p, *temp ;  
temp = (struct node*)malloc(sizeof(struct node));	
temp->info = data ; 	
p = start ; 	
while(p->link != NULL) 	
p = p->link ; 	
p->link = temp ; 	
temp->link = NULL ; 	
return start; 
} 
struct node* addatbeg(struct node* start , int data) 
{ 	
struct node* temp = (struct node*)malloc(sizeof(struct node)); 
temp->info = data ;	
temp->link = start ; 	
start = temp ; 	
return start; 
} 

void display(struct node *start) 
{
struct node *p ;
if(start == NULL) {
printf("List is empty");
return ;
}
p = start ;
while( p!= NULL) {
printf("%d ",p->info);
p = p->link;
}
}
void search(struct node *start , int item) {
struct node *p = start ;
int pos = 1 ;
while(p!= NULL){
if(p->info == item) {
printf("item %d found at position %d\n",item,pos);
return ;
}
p=p->link;
pos++;
}
printf("\nItem %d not found in the list.\n",item);
}
struct node* addbefore(struct node* start, int data , int item) 
{ 	
struct node *p , *temp ; 	
if(start == NULL) { 	
printf("List is empty.\n"); 	
return start ; 
} 	
if(item == start->info) { 	
temp = (struct node*)malloc(sizeof(struct node));	
temp->info = data ; 	
temp->link = start ; 	
start = temp ; 
} 	
p = start ; 	
while(p->link != NULL) { 	
if(p->link->info == item) { 	
temp = (struct node*)malloc(sizeof(struct node)); 
temp->info = data ; 	
temp->link = p->link ; 	
p->link = temp ; 	
return start ; 	
}		
p = p->link ; 
} 
printf("%d is not present in the list.\n", item); 
return start ; 
} 
struct node* addafter(struct node* start, int data , int item)
{ 	
struct node *p, *temp ;	
p = start ; 	
while(p->link!=NULL)
{ 	
if(p->info == item) 
{ 	
temp = (struct node*)malloc(sizeof(struct node)); 	
temp->info = data ; 	
temp->link = p->link ; 	
p->link = temp ; 	
return start ; 
} 	
p = p->link ; 
} 	
printf("%d item not present in the list.\n",data); 
return start ; 
} 
struct node* delatbeg(struct node* start)
{
    struct node*temp;
    temp=start;
    start=start->link;
    free(temp);
    return start;
}
struct node* delete_end(struct node* start)
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("nList is Empty:");
                exit(0);
        }
        else if(start->link ==NULL)
        {
                ptr=start;
                start=NULL;
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->link!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->link;
                }
                temp->link=NULL;
                free(ptr);
        }
        return start;
}
struct node* deletenode(struct node* start, int position) {
   if (start == NULL) {
      return start;
   }
   struct node* temp = start;
   if (position == 1) {
      start = temp->link;
      free(temp);
      return start;
   }
   for (int i = 2; temp != NULL && i < position ; i++) {
      temp = temp->link;
   }
   if (temp == NULL || temp->link == NULL) {
      return start;
   }
   struct node* next = temp->link->link;
   free(temp->link);
   temp->link = next;
   return start;
}

struct node* reverse(struct node* start) 
{ 
struct node *prev , *ptr , *next ; 
prev = NULL ; 
ptr = start ; 
while(ptr != NULL) { 
next = ptr->link ; 
ptr->link = prev ; 
prev = ptr ; 
ptr = next ; 
} 
start = prev ; 
return start ; 
}
void count(struct node *start) 
{
struct node *p ; int cnt = 0 ;
if(start == NULL) {
printf("List is empty.\n");
return ;
}
p = start ;
while(p != NULL) {
p = p->link;
cnt++;
}
printf("\nQ5.Number of elements are: %d\n",cnt);
}
struct node* del(struct node* start , int data)
{ 	
struct node *temp , *p ; 	
if(start == NULL) { 	
printf("List is empty.\n"); 	
return start ; 
} 	
if(start->info == data) 
{ 
temp = start ; 
start = start->link ; 	
free(temp) ; 	
return start ; 
} 
p = start ; 	
while(p->link != NULL) { 	
if(p->link->info == data) { 	
temp = p->link ; 
p->link = temp->link ; 	
free(temp) ; 	
return start ; 	
} 	
p = p->link ; 
} 	
printf("\nElement %d not present in the list.",data); 
return start ; 
} 
int find_position(struct node* start,int data)
{
    int pos=1;
    struct node* temp;
    temp=start;
   while(temp!=NULL&&temp->info!=data) 
   {
       pos++;
      temp= temp->link;
    }
    return (temp != NULL) ? pos : -1;;
}
 


int main()
{
    int data,num,pos=0;
    struct node *n,*start;
    start = createlist(n);
    printf("Original List is:\n");
    display(start);
    printf("\nQ1.");
    search(start,24);
    search(start,67);
    start=addatbeg(start,73);
    start=addatend(start,20);
    start=addbefore(start,45,67);
    start=addafter(start,77,31);
    printf("Q2.List after insertion:\n");
    display(start);
    printf("\nList after deleting beginning element\n");
    start=delatbeg(start);
    display(start);
    printf("\nList after deleting last element\n");
    start=delete_end(start);
    display(start);
    printf("\nList after deleting element 29\n");
    start=del(start,29);
    display(start);
    printf("\nList after deleting 5th element\n");
   start=deletenode(start,5);
   display(start);
   printf("\nList after deleting element before 6th position\n");
   start=deletenode(start,5);
   display(start);
   pos=find_position(start,20);
   if(pos==-1)
   printf("\nElement not found in list");
   else
   start=deletenode(start,pos+1);
    printf("\nQ3. List after deletion\n");
    display(start);
    start=reverse(start);
    printf("\nQ4.List after reversing:\n");
    display(start);
    count(start);
  return 0;
}