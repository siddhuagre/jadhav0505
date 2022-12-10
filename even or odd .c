#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  clrscr();
  printf("\n Enter  No.:");
  scanf("%d",&no);
if(no%2==0)
{
  printf("No is even:%d",no);
}
else
{
  printf("No is Odd:%d",no);
}
getch();
}
