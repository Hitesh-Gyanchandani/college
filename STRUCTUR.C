#include<stdio.h>
#include<conio.h>
struct Student{
int rollno,age;
char name[10];
};
void main()
{
struct Student ob[5];
int i;
clrscr();
for(i=0;i<5;i++)
{
printf("\n Enter roll no.");
scanf("%d",&(ob[i].rollno));
printf("\n Enter the age");
scanf("%d",&(ob[i].age));
printf("\n Enter the name");
/*
printf("Enter marks in subject 1 and subject 2");
scanf("%d%d",&(ob.m1),&(ob.m2));
*/
fflush(stdin);
gets(ob[i].name);
}
for(i=0;i<5;i++)
{
if(i==2)
{
printf("\n Roll no=%d",ob[i].rollno);
printf("\n Age=%d",ob[i].age);
printf("\n Name=%s",ob[i].name);
}
}
getch();
}
