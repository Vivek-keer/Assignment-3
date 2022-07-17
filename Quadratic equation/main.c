#include<stdio.h>
int main()
{
     int a,b,c,D;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    printf("\n Enter the value of c: ");
    scanf("%d",&c);
    D=b*b-4*a*c;
    D==0?printf("Roots are Real and equal"):D>0?printf("Roots are Real and distinct"):printf("Roots are imaginary");
    return 0;
}
