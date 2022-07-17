#include<stdio.h>
int main()
{
     int x,y,z;
     printf("Enter the value of x: ");
     scanf("%d",&x);
     printf("Enter the value of y: ");
     scanf("%d",&y);
     printf("Enter the value of z: ");
     scanf("%d",&z);
     printf("The greater number is ");
          if(x>y&&x>z) printf("%d",x);
          else if(y>z) printf("%d",y);
          else         printf("%d",z);

    return 0;
}
