#include<stdio.h>
#include<stdlib.h>
#define N 15
int a[N],b[N],c[N],t[N],q[N],p,x,i,j,k,n,m;
void merge();
void main()
{
printf("Enter the number of elements in first array:");
scanf("%d",&n);
printf("Enter the %d elements to the first array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number of elements in second array:");
scanf("%d",&m);
printf("Enter the %d elements to the second array:",m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("First array:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nSecond array:\n");
for(i=0;i<m;i++)
{
printf("%d\t",b[i]);
}
merge();
}

void merge()
{
i=j=k=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]==b[j])
{
c[k]=a[i];
j++;
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}
}
while(i<n)
{
c[k]=a[i];
k++;
i++;
}
while(j<m)
{
c[k]=b[j];
k++;
j++;
}
printf("\nMerged array:\n");
for(i=0;i<k;i++)
{
printf("%d\t",c[i]);
}
}
