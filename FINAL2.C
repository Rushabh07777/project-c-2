#include<stdio.h>
#include<conio.h>
main()
{
 int unit;
 int sum;
 float per;
 clrscr();
 scanf("%d",&unit);
 if (unit<=50){
    sum = unit*0.50;
 } else if (unit>50&&unit<=150){
    sum = (50*0.50)+(unit-50)*0.75;
 } else if (unit>150&&unit<=250){
    sum = (50*0.50)+(100*0.75)+((unit-150)*1.20);
 } else {
    sum = (50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*1.50);
 }
  per=0.20*sum;
  printf("%.2f",sum+per);
getch();
}
