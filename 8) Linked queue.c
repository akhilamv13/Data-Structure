#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*head,*temp,*preptr,*ptr;
int i,x,n,op,d;
void insert();
void delete();
void peek();
void display();
void main()
{
printf("\n1:Insert an element\n2:Delete an element\n3:Peek(display the last element)\n4:Display queue\n5:Exit\n");
do{
printf("\nEnter an option:");
scanf("%d",&op);
switch(op)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:peek();
break;
case 4:display();
break;
default:printf("invalid option\n");
printf("continue...");
}
}while(op!=5);
}
void insert()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data to insert:");
scanf("%d",&x);
newnode->data=x;
if(head==NULL)
{
head=newnode;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
}
printf("Element inserted\n");
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
void delete()
{
if(head==NULL)
{
printf("Empty linked Queue\n");
}
else
{
temp=head;
head=temp->next;
free(temp);
printf("Element deleted successfully from the beginning\n");
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
void peek()
{
if(head==NULL)
{
printf("Empty linked Queue\n");
}
else
{
printf("peek element:%d",head->data);
}
}
void display()
{
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
