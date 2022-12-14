#include<stdio.h>
#include<conio.h>
void main()
{
  int a,w;
  clrscr();
  printf("\n Enter age & weight:");
  scanf("%d%d",&a,&w);
  if(a>=18)
  {
   if(w>=50)
   {
    printf("\n Elligible for blood donation");
   }
   else
   {
    printf("\n Not elligible for blood donation");
   }
  }
  else
  {
   printf("\n  Not elligible for blood donation");
   }
getch();
}
