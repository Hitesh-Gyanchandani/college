#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10],l,sl,c;
clrscr();
printf("Program developed by: Hitesh Gyanchandani \n Enrollment no.0187CS181061 \n Enter the elements in the array");
for(i=0;i<10;i++)
{
printf("\n a[%d]=",i);
scanf("%d",&a[i]);
}
l=a[0];
sl=a[1];
if(sl>l)
{
c=sl;
sl=l;
l=c;
}
for(i=2;i<10;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl)
{
sl=a[i];
}
}
printf("The second largest element is %d",sl);
getch();
}

