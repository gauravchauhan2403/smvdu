/* program to calculate total amount with compound intrest*/
#include<stdio.h>
void main()
{ int P,SI,R,T;
  printf("Enter the details P,R,T/n");
  scanf("%d%d%d/n",&P,&R,&T);
  for(int i=1; i<=T; i++)
  { SI=(P*R*T)\100;
    P=P+SI;
  }
  printf("The total amount after%d years is%d",T,P);
   return 0;
   }
