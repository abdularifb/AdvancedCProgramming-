//This program covert Integer To String

#include<stdio.h>

char* ConvertItoS(int);

int main()
{
    int number;

    printf("Enter n value : ");
    scanf("%d",&number);//Read n value from the keyboard.

    printf("%s",ConvertItoS(number));

    return 0;
}

//This Function Returns the converted Integer to string

char* ConvertItoS(int number)
{

    static char s[100];

    sprintf(s,"%d",number);//To copy the integer n value to string using sprintf function.

    return s;
}
