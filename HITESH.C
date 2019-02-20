#include<stdio.h>
#include<conio.h>
void dia(float);
void circumference(float);
void area(float);
void main()
{
float r,m,n,l,j;
int c;
clrscr();
printf("\nenter the  character");
scanf("%d",&c);
//scanf("%f",&r);
switch(c)
{
case 1:
scanf("%f",&r);
 dia(r);
//getch();
break;
/*case 'c':
n=circumference(r);
printf("%f",n);
getch();
break;
case'a':
l=area(r);
printf("%f",l);
getch();
break; */

}
getch();
}
void dia(float x)
{
float g;
g=2*x;
printf("%f",g);
}
