// Write a program to check whether a given number is divisible by 3 and divisible by 7.
#include <stdio.h>
int main()
{
    int x;
    printf("ENter the Number: ");
    scanf("%d",&x);
    printf("Given no. is: ");
    if(x%3==0) printf("Divisible by 3 ");
    if(x%7==0) printf("Divisible by 7");
    else if(x%3) printf("Neither by 3 nor divisible by 7");
    return 0;
}



