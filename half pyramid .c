#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
  i=1;
  do
  {
    j=1;
    do
    {
      printf("*");
      j++;
    }
    while(j<=i);
    printf("\n");
    i++;
  }
  while(i<=5);
  getch();
}
