#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*head,*temp,*preptr,*ptr;
int i,x,n,op,d;
void push();
void pop();
void top();
void display();
void main()
{
printf("\n1:push an element(Insert)\n2:Pop an element(Delete)\n3:Display Top element\n4:Display Element\n5:Exit\n");
do{
printf("\nEnter an option:");
scanf("%d",&op);
switch(op)
{
case 1:push();
break;
case 2:pop();
break;
case 3:top();
break;
case 4:display();
break;
default:printf("invalid option\n");
}
}while(op!=5);
}
void push()
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
printf("Element inserted at the end\n");
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
void pop()
{
if(head==NULL)
{
printf("Empty linked stack\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
ptr=temp;
temp=temp->next;
}
ptr->next=NULL;
free(temp);
printf("Element deleted successfully\n");
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
void top()
{
if(head==NULL)
{
printf("Empty linked stack\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
printf("Element at the end=%d\n",temp->data);
}
}
void display()
{
if(head==NULL)
{
printf("Empty linked stack\n");
}
else
{
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
