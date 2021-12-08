#include<stdio.h>
#define N 10
int a[N],n,s=0,m,op,i,sm,lg=0,c,opt;
void large();
void small();
void reverse();
int sum();
void mean();
void main()
{
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n1.Find largest number\n");
printf("2.Find smallest number\n");
printf("3.Print reverse\n");
printf("4.Find sum\n");
printf("5.Find mean\n");
do{
printf("Enter the option:");
scanf("%d",&op);
switch(op)
{
case 1:large();
break;
case 2:small();
break;
case 3:reverse();
break;
case 4:c=sum();
printf("sum=%d",c);
break;
case 5:mean();
break;
default:printf("Invalid option");
}
printf("\ndo you want to continue?[click 1 for yes or 0 for no]\n");
scanf("%d",&opt);
}while(opt==1);
}
void large()
{
for(i=0;i<n;i++)
{
if(lg<a[i])
{
lg=a[i];
}
}
printf("large number=%d",lg);
}
void small()
{
sm=a[0];
for(i=0;i<n;i++)
{
if(sm>a[i])
{
sm=a[i];
}
}
printf("small number=%d",sm);
}
void reverse()
{
printf("reverse of array:");
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
}
int sum()
{
for(i=0;i<n;i++)
{
s=s+a[i];
}
return(s);
}
void mean()
{
c=sum();
m=c/n;
printf("mean=%d",m);
}

