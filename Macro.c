//This Program to find Mean, Absolute value, Lowercase and Biggest Element using HeaderFile.

#include<stdio.h>
#include<math.h>
#define SIZE 20
#include "MyHeader.h"

void Macros(int,int,char[]);

int main()
{
    int a=-10,b=20;

    char s[SIZE];

    printf("Enter the string : ");
    scanf("%s",&s);

    Macros(a,b,s);

    return 0;
}

void Macros(int a,int b,char s[])
{
    printf("MEAN  : %d\n",MEAN(a,b));
    printf("Absolute value : %d\n",ABS(a));
    printf("Lowercase : %s\n",STRLWR(s));
    printf("Biggest Element : %d\n",FINDBIGGER(a,b));
}
