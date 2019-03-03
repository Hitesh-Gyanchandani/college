// program to calculate diameter,circumference,and area of circle using functions

#include<stdio.h>
#include<conio.h>
void dia(float);
void circumference(float);
void area(float);
void main()
{
	float r,n;
	clrscr();
		printf("Enter the radius");
		scanf("%f",&r);
		dia(r);
		circumference(r);
		area(r);
		getch();
}
void dia(float x)
{
		float d;
		d=2*x;
		printf("The dia of circle is %f",d);
}
void circumference(float x)
{
		float c;
		c=2*3.14*x;
		printf("\n The circumference of circle is %f",c);
}
void area(float x)
{
		float a;
		a=3.14*x*x;
		printf("\n The area of circle is %f",a);
}