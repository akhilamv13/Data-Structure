#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
int op,i=0,x,n;
struct node *head,*newnode,*temp;
void addnode();
void display();
void count();
void search();
void main()
{
printf("\n1:Add node\n2:Display linked list\n3:Count nodes\n4:search\n5:Exit\n");
do{
printf("\nEnter an option:");
scanf("%d",&op);
switch(op)
{
case 1:addnode();
break;
case 2:display();
break;
case 3:count();
break;
case 4:search();
break;
default:printf("invalid option\n");
printf("continue...");
}
}while(op!=5);
}
void addnode()
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&x);
newnode->data=x;
if(head==NULL)
{
head=temp=newnode;
}
else
{
temp->link=newnode;
temp=newnode;
}
printf("node added successfully\n");
}
void display()
{
temp=head;
printf("elements are:");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
}
void count()
{
temp=head;
while(temp!=NULL)
{
i=i+1;
temp=temp->link;
}
printf("Number of nodes in linked list:%d\n",i);
}
void search()
{
printf("Enter data to search:");
scanf("%d",&n);
i=0;
temp=head;
while(temp->data!=n)
{
i=i+1;
temp=temp->link;
}
if(temp->data==n)
{
printf("%d id found in position %d",n,i+1);
}
else
{
printf("Element not found\n");
}
}

