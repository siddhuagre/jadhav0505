#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
  clrscr();
  printf("\n Enter the age:");
  scanf("%d",&age);
  if(age>=18)
  {
    printf("\n You are eligible for voting");
  }
  else
  {
    printf("\n You arae not eligible for voting");
  }
  getch();
}
