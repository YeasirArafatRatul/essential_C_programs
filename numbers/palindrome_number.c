/*A palindrome number is a number that is same after reverse.
For example 121, 34543, 343, 131, 48984 are the palindrome numbers. */

#include<stdio.h>

int main()

{
    int n,r,sum=0,temp;

    printf("enter the number=");
    scanf("%d",&n);

    temp = n;

    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
        printf("Palindrome Number ");
    else
        printf("Not Palindrome");

    return 0;
}
