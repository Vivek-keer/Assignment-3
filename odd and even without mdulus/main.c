// program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>


int main()
{
    int x,q,r;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Given number is ");
    q=x/2;
    r=x-2*q;
    if(r) printf("Odd");
    else printf("Even");
    return 0;
}

