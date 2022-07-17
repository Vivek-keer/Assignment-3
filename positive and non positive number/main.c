#include <stdio.h>

int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("Given number is  ");
    if(x>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non-positive");
    }
    return 0;
}
