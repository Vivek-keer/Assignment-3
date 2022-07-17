#include<stdio.h>
int main()
  {
      int x,y;
      printf("Enter the number: ");
      scanf("%d",&x);
      printf("Given number is: ");
      if(x/100)
      {
         y=x/100;
         if(y>9)
         {printf("Not Three-digit number.");}
         else
         {
             printf("Three-digit number.");
         }
      }

      else
        {
            printf("Not Three-digit number");
        }
      return 0;

  }
