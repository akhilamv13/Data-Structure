#include<stdio.h>
#define N 10
int stack[N],x,item,top=-1,op,opt,i;
void push();
void pop();
void topp();
void display();
void main()
{
printf("1.Push an element\n");
printf("2.Pop an element\n");
printf("3.Print the top most element\n");
printf("4.Display elements in the stack\n");
do{
printf("Enter the option:");
scanf("%d",&op);
switch(op)
{
case 1:push();
break;
case 2:pop();
break;
case 3:topp();
break;
case 4:display();
break;
default:printf("Invalid option\n");
}
printf("\ndo you want to continue?[click 1 for yes or 0 for no]\n");
scanf("%d",&opt);
}while(opt==1);
}
void push()
{
if(top==N-1)
{
printf("stack overflow\n");
}
else
{
top++;
printf("Insert element:");
scanf("%d",&stack[top]);
}
printf("element inserted\n");
}
void pop()
{
if(top==-1)
{
printf("stack underflow\n");
}
else
{
item=stack[top];
top--;
printf("element deleted\n");
}
}
void topp()
{
if(top==-1)
{
printf("stack empty\n");
}
else
{
item=stack[top];
printf("top element=%d",item);
}
}
void display()
{
if(top==-1)
{
printf("stack empty\n");
}
else
{
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
}
}
 
