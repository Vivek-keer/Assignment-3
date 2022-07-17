
// Write a program to check whether a given number is positive, negative or zero.
 #include <stdio.h>

int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("Given number is ");
    if(x>0)  printf("Positive");
    else if(x<0) printf("Negative");
    else printf("zero");
    return 0;
}


