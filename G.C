#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j,sum[3][3];
clrscr();
printf("Enter the elements of first array \n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of second array \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("The sum is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum[i][j]=a[i][j]+b[i][j];
printf("\n %d",sum[i][j]);
}
printf("\n");
}
getch();
}
