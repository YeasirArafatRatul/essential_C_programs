/* A number can be said as a STRONG number when the sum of the factorial of the individual digits is equal to the number.

For example, 145 is a STRONG number.

*/

#include<stdio.h>

int fact(int); //Prototype

int main(){

    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int k=n;
    int r;
    while(k!=0)
    {
        r=k%10;
        int f=fact(r);
        k=k/10;
        sum=sum+f;
    }
    if(sum==n)
    {
        printf("\nNumber is a Strong");
    }
    else
    {
        printf("\nNumber is not a Strong");
    }
    return 0;
}

// This function returns factorial of a number
int fact(int r)
{
    int fact = 1;

    for(int i=1; i<=r; i++)
    {
        fact=fact*i;
    }
    return fact;

}
