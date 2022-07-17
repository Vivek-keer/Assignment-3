#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("Given number is ");
    if(x%5==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Non-Divisible by 5");
    }
    return 0;
}
