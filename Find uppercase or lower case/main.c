//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
    {
        char x;
        printf("Enter the alphabet: ");
        scanf("%c",&x);
        if('a'<=x&&x<='z') printf("Lower case");
        if('A'<=x&&x<='Z') printf("Upper case");
        return 0;
    }

