#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *prev;
int data;
struct node *next;
};
struct node *newnode,*head,*temp,*ptr,*preptr;
int x,n,i,d,op;
void insertbeg();
void insertpos();
void insertend();
void deletebeg();
void deletepos();
void deleteend();
void display();
void main()
{
printf("1:Insertion at beginning\n2:Insertion at given position\n3:Insertion at end\n4:Delete from beginning\n5:Delete from given position\n6:Delete from end\n7:Exit\n");
do{
printf("\nEnter an option:");
scanf("%d",&op);
switch(op)
{
case 1:insertbeg();
break;
case 2:insertpos();
break;
case 3:insertend();
break;
case 4:deletebeg();
break;
case 5:deletepos();
break;
case 6:deleteend();
break;
default:printf("Invalid Option\n");
}
}while(op!=7);
}
void display()
{
printf("Elements are:\n");
ptr=head;
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
}
void insertbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter element to insert:");
scanf("%d",&x);
newnode->data=x;
if(head==NULL)
{
newnode->prev=NULL;
newnode->next=NULL;
head=newnode;
}
else
{
newnode->prev=NULL;
newnode->next=head;
head->prev=newnode;
head=newnode;
}
printf("Element Successfully Inserted\n");
display();
}
void insertpos()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter element to insert:");
scanf("%d",&x);
newnode->data=x;
printf("Enter the data in the position in which the element should be inserted:");
scanf("%d",&n);
ptr=head;
while(ptr->next!=NULL)
{
temp=ptr;
ptr=ptr->next;
if(ptr->data==n)
{
break;
}
}
if(ptr->data==n)
{
temp->next=newnode;
newnode->next=ptr;
newnode->prev=temp;
ptr->prev=newnode;
printf("Element Inseted Successfully\n");
display();
}
else
{
printf("Element not found\n");
}
}
void insertend()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter element to insert:");
scanf("%d",&x);
newnode->data=x;
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=newnode;
newnode->prev=ptr;
newnode->next=NULL;
printf("element inserted successfully at the end\n");
display();
}
void deletebeg()
{
if(head==NULL)
{
printf("Empty Doubly Linked List\n");
}
else
{
ptr=temp=head;
ptr=ptr->next;
ptr->prev=NULL;
head=ptr;
free(temp);
printf("Element Successfully Deleted\n");
display();
}
}
void deletepos()
{
if(head==NULL)
{
printf("Empty Doubly Linked List\n");
}
else
{
ptr=head;
printf("Enter the element to be deleted:");
scanf("%d",&d);
while(ptr->next!=NULL)
{
preptr=ptr;
ptr=ptr->next;
if(ptr->data==d)
{
temp=ptr->next;
break;
}
}
if(ptr->data==d)
{
preptr->next=temp;
temp->prev=preptr;
free(ptr);
printf("Element Successfully Deleted\n");
display();
}
else
{
printf("element not found\n");
}
}
}
void deleteend()
{
if(head==NULL)
{
printf("Empty Doubly Linked List\n");
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=NULL;
free(ptr);
printf("Element Successfully deleted\n");
display();
}
}
