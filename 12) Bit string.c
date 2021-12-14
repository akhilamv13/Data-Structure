#include <stdio.h>
#include<stdlib.h>
#define N 10
void bit();
void unionn();
void intersection();
void difference();
int a[N],b[N],U[N],t[N],c[N],k,m,n,op,i,j;
void main()
{
printf("enter the number of elements in universal set:");
scanf("%d",&k);
printf("enter the elements in universal set:");
for(i=0;i<k;i++)
scanf("%d",&U[i]);
printf("enter the number of elements in first set:");
scanf("%d",&m);
printf("enter the elements in first set:");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("enter the number of elements in second set:");
scanf("%d",&n);
printf("enter the elements in second set:");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
bit();
printf("\n1:union\n2:Intersection\n3:Difference\n");
do{
printf("\nEnter an option:");
scanf("%d",&op);
switch(op)
{
case 1:unionn();
break;
case 2:intersection();
break;
case 3:difference();
break;
default:printf("Invalid option\n");
}
}while(op!=4);
}

void bit()
{
for(i=0;i<k;i++)
{
t[i]=0;
for(j=0;j<m;j++)
{
if(a[j]==U[i])
{
t[i]=1;
}
}
}
for(i=0;i<k;i++)
{
a[i]=t[i];
}

for(i=0;i<k;i++)
{
t[i]=0;
for(j=0;j<n;j++)
{
if(b[j]==U[i])
{
t[i]=1;
}
}
}
for(i=0;i<k;i++)
{
b[i]=t[i];
}


printf("\nBitstring of first set:\n");
for(i=0;i<k;i++)
{
printf("%d\t",a[i]);
}

printf("\nBitstring of second set:\n");
for(i=0;i<k;i++)
{
printf("%d\t",b[i]);
}
}
void unionn()
{
for(i=0;i<k;i++)
{
c[i]=1;
if(a[i]==0 && b[i]==0)
c[i]=0;
}
printf("\nBitstring union of first and second set:\n");
for(i=0;i<k;i++)
{
printf("%d\t",c[i]);
}
}

void intersection()
{
for(i=0;i<k;i++)
{
c[i]=0;
if(a[i]==1 && b[i]==1)
c[i]=1;
}
printf("\nBitstring intersection of first and second set:\n");
for(i=0;i<k;i++)
{
printf("%d\t",c[i]);
}
}

void difference()
{
for(i=0;i<k;i++)
{
if(b[i]==0)
t[i]=1;
else
t[i]=0;
}
for(i=0;i<k;i++)
{
c[i]=0;
if(a[i]==1 && t[i]==1)
c[i]=1;
}
printf("\nBitstring difference of first and second set:\n");
for(i=0;i<k;i++)
{
printf("%d\t",c[i]);
}
