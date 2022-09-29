#include<stdio.h>
char*display();
char *revstr(char *str1);
int main(){
    /*char str[]="Jghfasvv";
    str[1]='a';
    printf("%s\n",str);*/
    char str1[]="vhjdvcu";

    printf("%s\n",revstr(str1));
    return 0;
}
char *revstr(char *str1)
{
    int i, len;
    len = strlen(str1);
    for (i = 0; i < len/2; i++)
    {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
    return str1;
}
