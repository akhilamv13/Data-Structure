#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*head,*temp,*preptr,*ptr;
int i,x,n,op,d;
void insertbeg();
void insertpos();
void insertend();
void deletebeg();
void deletepos();
void deleteend();
void main()
{
printf("\n1:Insert at beginning\n2:Insert at any given position\n3:Insert at the end\n4:Delete from beginning\n5:Delete from any given position\n6:Delete from end\n7:Exit\n");
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
default:printf("invalid option\n");
}
}while(op!=7);
}
void insertbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data to insert:");
scanf("%d",&x);
newnode->data=x;
if(head==NULL)
{
head=temp=newnode;
printf("data inserted at the beiggining successfully\n");
}
else
{
temp=head;
head=newnode;
newnode->next=temp;
printf("data inserted at the beiggining successfully\n");
}
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
void insertpos()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data to insert:");
scanf("%d",&x);
newnode->data=x;
printf("enter the data in the position in which new element is inserted:");
scanf("%d",&n);
temp=head;
while(temp->data!=n)
{
ptr=temp;
temp=temp->next;
}
newnode->next=temp;
ptr->next=newnode;
printf("Element inserted at the given position\n");
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
void insertend()
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
void deletebeg()
{
if(head==NULL)
{
printf("Empty linked list\n");
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
void deletepos()
{
if(head==NULL)
{
printf("Empty linked list\n");
}
else
{
printf("enter the data to be deleted\n");
scanf("%d",&d);
temp=head;
while(temp->data!=d)
{
ptr=temp;
temp=temp->next;
}
if(temp->data==d)
{
ptr->next=temp->next;
free(temp);
printf("Element deleted successfully\n");
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
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
printf("Empty linked list\n");
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
