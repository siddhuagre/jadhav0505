#include<stdio.h>
#include<conio.h>
void main()
{
   int r;
  float area;
  clrscr();
  printf("\n Enter a radius:");
  scanf("%d",&r);
  area=3.14*r*r;
  printf("\n area of circle=%f",area);
  getch();
}
