//This program to find invalid characters.

#include<stdio.h>

void InvalidCharacter(char[]);

int main()
{
    char Characters[50];

    printf("Enter the string : ");
    gets(Characters);

    InvalidCharacter(Characters);

    return 0;
}

void InvalidCharacter(char ch[])
{
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i] >= 48 && ch[i] <= 57)
        {
            printf("Number : %c\n",ch[i]);
        }
        else if(ch[i] >= 65 && ch[i] <= 90 || ch[i] >= 97 && ch[i] <= 122)
        {
            printf("Alphabet : %c\n",ch[i]);
        }
        else if((ch[i] >= 2 && ch[i] <= 47)|| (ch[i] >= 58 && ch[i] <= 64) || (ch[i] >= 91 && ch[i] <= 96) || (ch[i] >= 123 && ch[i] <= 126))
        {
            printf("Special character : %c\n",ch[i]);
        }
        else
        {
            printf("Invalid character!!! : %c\n",ch[i]);
        }
    }
}
