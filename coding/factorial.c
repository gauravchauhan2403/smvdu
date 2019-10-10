#include<stdio.h>
void main()
{  
  int n,fact=1;
   printf(" Enter the number whose factorial is needed/n");
    scanf("%d",&n);
    for(int i=n; i>0; i--)
    { fact*=i;
      }
    printf("The factorial of the no. is%d",fact);
      return 0;
  }
