//program to delete an element from the array
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],position;
clrscr();
printf("Enter the elements of array");
for(i=0;i<5;i++)
{
printf("\n a[%d]=",i);
scanf("%d",&a[i]);
}
printf("The position is");
scanf("%d",&position);
for(i=position;i<4;i++)
{
a[i]=a[i+1];
}
for(i=0;i<4;i++)
{
printf("\n %d",a[i]);
}
getch();
}