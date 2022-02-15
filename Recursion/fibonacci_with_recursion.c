/* In case of fibonacci series, next number is the sum of previous two numbers.
for example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc. The first two numbers of fibonacci series are 0 and 1.
*/


#include<stdio.h>
void printFibonacci(int n){
    static int n1=0, n2=1, n3;

    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         printFibonacci(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);

    printFibonacci(n-2);//n-2 because 2 numbers are already printed
  return 0;
 }
