/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
 #include<stdio.h>
 int main()
 {
     int e,m,s,h,c;
     printf("Enter marks of Following subject");
     printf("\nEnglish: ");scanf("%d",&e);
     printf("Math: ");   scanf("%d",&m);
     printf("Science: ");scanf("%d",&s);
     printf("Hindi: ");  scanf("%d",&h);
     printf("C language: ");scanf("%d",&c);
     printf("Result:-\n");
     printf("English:    ");      e>=33?printf("pass"):printf("Fail");
     printf("\nMath:       ");       m>=33?printf("pass"):printf("Fail");
     printf("\nScience:    ");    s>=33?printf("pass"):printf("Fail");
     printf("\nHindi:      ");      h>=33?printf("pass"):printf("Fail");
     printf("\nC language: "); c>=33?printf("pass"):printf("Fail");
     return 0;
 }
