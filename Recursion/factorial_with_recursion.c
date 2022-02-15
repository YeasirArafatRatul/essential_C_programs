/*
Factorial of n is the product of all positive descending integers. Factorial of n is denoted by n!. For example:

5! = 5*4*3*2*1 = 120
3! = 3*2*1 = 6
*/

#include<stdio.h>

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

void main()
{
  int number;
  long fact;

  printf("Enter a number: ");
  scanf("%d", &number);

  fact = factorial(number);
  printf("Factorial of %d is %ld\n", number, fact);

}
