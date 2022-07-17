//Write a program to check whether a given number is divisible by 2 or divisible by 3.
 #include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("Given no. is: ");
    if(x%2==0) printf("Divisible by 2 ");
    if(x%3==0) printf("Divisible by 3");
    else if(x%2) printf("Neither by 3 nor divisible by 2");
    return 0;
}
