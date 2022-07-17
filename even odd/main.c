#include <stdio.h>
int main()
{
    int x;
    printf("ENter the Number: ");
    scanf("%d",&x);
    printf("Given no. is: ");
    if(x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
