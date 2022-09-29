//This Program Reverse the string without Using buffer variable.

#include<stdio.h>
#include<string.h>
#define SIZE 100

char* reverse(char[]);

int main()
{
    char s[SIZE];
    scanf("%s",&s);

    printf("%s",reverse(s));

    return 0;
}

char* reverse(char s[])
{
    int l = strlen(s);

    for(int i=0; i<(l/2); i++)
    {
        s[i]=s[i]-s[(l-i)-1];
        s[(l-i)-1]=s[i]+s[(l-i)-1];
        s[i]=s[(l-i)-1]-s[i];
    }

    return s;
}
