#include<stdio.h>
#include<conio.h>
struct S{
int x,y;
};
struct S add1(struct S);
struct S add1(struct S v,struct S v1)
{
struct S ob;
ob.x=v.x+v1.x ;
ob.y=v.y+v1.y;
return ob;
}
struct S mult1(struct S);
struct S mult1(struct S v,struct S v1)
{
struct S ob1;
ob1.x=v.x*v1.x;
ob1.y=v.y*v1.y;
return ob1;
}
struct S subt1(struct S);
struct S subt1(struct S v,struct S v1)
{
struct S ob2;
ob2.x=v.x-v1.x;
ob2.y=v.y-v1.y;
return ob2;
}
void main()
{
clrscr();
printf("\n Developed by:HITESH GYANCHANDANI");
printf("\n Enrollment no.:0187CS181061");
struct S v,v1;
printf("\n Enter real number= ");
scanf("%d",&(v.x));
printf("\n Enter imaginary number=");
scanf("%d",&(v.y));
printf("\n Enter real number=");
scanf("%d",&(v1.x));
printf("\n Enter imaginary number=");
scanf("%d",&(v1.y));
struct S add=add1(v,v1);
struct S mult=mult1(v,v1);
struct S subt=subt1(v,v1);
printf("\n sum=%d+%di",add.x,add.y);
printf("\n mult=%d+%di",mult.x,mult.y);
printf("\n subtraction= %d+%di",subt.x,subt.y);
getch();

}

