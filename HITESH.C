#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,low,high,mid,i,x;
clrscr();
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("Enter element to be sorted");
scanf("%d",&x);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(x==a[mid])
{
printf(" \n search successful a[%d]",mid);
break;
}
if(x>a[mid])
{
low=mid+1;
}
if(x<a[mid])
{
high=mid-1;
mid=(low+high)/2;
}
}
if(low>high)
{
printf("not found %d",x);
}
getch();
}
