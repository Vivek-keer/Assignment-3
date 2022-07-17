#include <stdio.h>


int main()
{
    float sp,cp,pl,per;
    printf("Enter the Selling price: ");
    scanf("%f",&sp);
    printf("Enter the cost price: ");
    scanf("%f",&cp);
    pl=sp-cp;
    per=pl/cp*100;
    if(pl>0) printf("Profit percentage is %.2f",per);
    else       printf("loss percentage is %.2f",-1*per);

    return 0;
}
