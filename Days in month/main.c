/*Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month number\n");
    scanf("%d",&x);
    if(x%2)
    {
      if(x<=7) printf("31 days"); else printf("30 days");printf("\n");
    }
    else
    {
      if(x>=8) printf("31 days \n"); else if(x>2) printf("30 days \n");
    else printf("28 days \n");

    }
    return 0;
}
