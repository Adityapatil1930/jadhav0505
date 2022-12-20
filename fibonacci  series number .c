#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a=0,b=1,c,number;
  clrscr();
  printf("\n Enter the no=");
  scanf("%d",&number);
  printf("\n fibonacci series =\n");
  for(i=1;i<=number;i++)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%d\t",c);
  }
  getch();
}
