#include<stdio.h>
void main()
{ int a,b,c;
  printf("Enter the number to swap/n");
  scanf("%d%d/n",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("The no after swaping is%d%d/n",a,b);
  return 0;
  }
