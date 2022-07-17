#include<stdio.h>
int main()
{
     int y,leap;
    printf("Enter the year: ");
    scanf("%d",&y);
    leap=y%4;
    if(leap) printf("\n %d is not a leap year",y);
    else printf("\n %d is a leap year",y);
    return 0;
}

