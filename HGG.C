// program to find greatest among two numbers using functions

#include<stdio.h>
#include<conio.h>
void greatest(int,int);
void main()
{
	int a,b;
	clrscr();
		printf("Enter the a and b");
		scanf("%d%d",&a,&b);
		greatest(a,b);
		getch();
}
void greatest(int a,int b)
{
if(a>b)
printf("a is greatest");
else
printf("b is greatest");


}
