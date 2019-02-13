#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50],b;
 int i,j=0;
 clrscr();
 printf("Enter the name \n");
 gets(a);
 printf("Enter the character \n");
 scanf("%s",&b);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]==b)
 {
 j++;
 }
 }
 printf("frequency %d",j);
 getch();
 }
