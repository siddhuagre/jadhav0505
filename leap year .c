#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\n Enter the year :");
scanf("%d",&year);
if (year%4==0)
  {
  printf("\n The given year is leap year");
  }
else 
  {
  printf('\n The given  year is not leap year");
  }
getch();
 }
