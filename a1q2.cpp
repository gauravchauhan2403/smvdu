/* name: vinayak sharma
smvdu, jammu ECE
code description: checking if m is exact multiple of n. output will be 0 if m is not a multiple of n. output will be m/n if m is a multiple of n */
#include <stdio.h>
int main()
{
  int m, n, a;      //decleration of variables
  printf("Enter any 2 no.s");
  scanf("%d", &m);  //taking the input of m
  scanf("%d", &n);  //taking the input of n
  
  if ( m%n == 0)    //logical operation for checking if m is a multiple of n
  {
    a = m/n;        // m divided by n stored in a variable
    printf("%d is a exact multiple of %d and %d ",a,m,n); 
  }
  else              //if the logic holds false this else statement will be carried out  
  {
    printf("Not an exact multiple");
  }
  return 0;
}

