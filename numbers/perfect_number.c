/* In mathematics, a perfect number is a positive integer that is equal
to the sum of its positive divisors, excluding the number itself.
6 is perfect number -> 1 + 2 + 3 = 6;
28 is perfect number -> 1 + 2 + 4 + 7 + 14 = 28

*/

/*C program to check whether the given number is the Perfect number*/
#include<stdio.h>
#include<conio.h>
void main()
{
// declare and initialize the variables
int num, rem, sum = 0, i;
// take an input from the user.
printf("Enter a number: ");
scanf("%d", &num);

// find all divisors and add them
for(i = 1; i < num; i++)
{
    rem = num % i;
    if (rem == 0)
    {
      sum = sum + i;
    }
}
if (sum == num)
    printf("%d is a Perfect Number", num);
else
    printf("\n%d is not a Perfect Number", num);\

getch();

}
