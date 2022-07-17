
 //Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
    {
        char x;
        printf("Enter any character: ");
        scanf("%c",&x);
        if('a'<=x&&x<='z') printf("Lower case");
        else if('A'<=x&&x<='Z') printf("Upper case");
        else if('0'<=x&&x<='9') printf("digit");
        else printf("Special character");
        return 0;
    }


