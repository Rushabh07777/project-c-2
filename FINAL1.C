#include<stdio.h>
#include<conio.h>
main()
{
 int a;
 clrscr();
 printf("Enter the even/odd number\n");
 scanf("%d",&a);
 (a%2==0)?printf("This number is Even"):printf("This number is odd ");
 getch();
 }