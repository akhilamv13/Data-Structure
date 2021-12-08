#include<stdio.h>
#define N 3
int queue[N],front=-1,rear=-1,i,op,x,item,temp;
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
printf("Insert an element:");
scanf("%d",&x);
if(rear==N-1&&front==0)
{
printf("queue overflow\n");
}
else if(front==-1 && rear==-1)
{
rear=front=0;
queue[rear]=x;
printf("element inserted successfully\n");
}
else if(rear==N-1 && front!=0)
{
rear=0;
queue[rear]=x;
printf("element inserted successfully\n");
}
else if(front!=0 && rear<front)
{
temp=rear+1;
if(temp!=front)
{
rear=rear+1;
queue[rear]=x;
printf("element inserted successfully\n");
}
else
{
printf("queue overflow\n");
}
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
if(front==-1)
{
printf("queue is empty...\n");
}
else if(front==rear)
{
item=queue[front];
front=rear=-1;
printf("element deleted successfully....\n deleted element=%d\n",item);
}
else if(front==N-1)
{
item=queue[front];
front=0;
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
if(front==-1)
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
if(front==-1 && rear==-1)
{
printf("queue is empty");
}
else if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}
else
{
for(i=front;i<=N-1;i++)
{
printf("%d\t",queue[i]);
}
for(int j=0;j<rear+1;j++)
{
printf("%d\t",queue[j]);
}
}
}
