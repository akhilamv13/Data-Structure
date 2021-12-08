#include<stdio.h>
#define N 5
int queue[N],front=-1,rear=-1,i,op,x,item;
void insert();
void delete();
void peek();
void display();
void main()
{
printf("\n1:Insert an element\n2:Delete an element\n3:Peek(display the last element)\n4:Display queue\n5:Exit\n");
do{
printf("Enter an option:");
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
printf("Insert an element:");
scanf("%d",&x);
if(rear==N-1)
{
printf("queue overflow\n");
}
else if(front==-1 && rear==-1)
{
rear=front=0;
queue[rear]=x;
printf("element inserted successfully\n");
}
else
{
rear=rear+1;
queue[rear]=x;
printf("element inserted successfully\n");
}
}
void delete()
{
if(front==5-1||front>rear)
{
printf("queue is empty...\n");
}
else
{
item=queue[front];
front=front+1;
printf("element deleted successfully....\n deleted element=%d\n",item);
}
}
void peek()
{
if(front==-1||front>rear)
{
printf("queue is empty...\n");
}
else
{
item=queue[front];
printf("peek element=%d\n",item);
}
}
void display()
{
printf("Elements are:");
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
printf("\n");
}
