#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  clrscr();
  printf("\n Enter a no=");
  scanf("%d",&no);
  if(no>=0)       
     { 
       printf("\n Given no is Positive=%d");
     }
  else
     {
       printf("\n Given no is Negative=%d");
     }
getch();
}
  
