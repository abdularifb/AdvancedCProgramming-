//This program print the string in reverse order.

#include<stdio.h>
#include<string.h>
#define SIZE 5

char *revstr(char*);
char* ReverseWords(char[]);

int main()
{
    char Sentence[SIZE];

    printf("Enter the Sentence : ");
    scanf("%[^\n]",Sentence);

    printf("%s\n",ReverseWords(Sentence));

    return 0;
}

char* ReverseWords(char Sentence[])
{
    static char ReverseSentence[SIZE];

    int CharCount = 0;
    char temp[SIZE];

    for(int i=strlen(Sentence)-1;i>=0;i--)
    {
        if(i==0) //Once i value become zero the last character will be reached so reverse it and concatnate the temp strin and s1
        {
            temp[CharCount]=Sentence[i];
            strcat(ReverseSentence,revstr(temp));//The words are reverse order so reverse it and concatnate into s1.

        }

        else if(Sentence[i]==' ') //Once space will be encountered concatnate the temp string and s1 string and also add space.
        {
            strcat(ReverseSentence,revstr(temp));//The words are reverse order so reverse it and concatnate into s1.
            strcat(ReverseSentence," ");
            memset(temp,0,sizeof(temp));//clear the temp array because storing another word
            CharCount=0;//decrease the counter because the temp array start from 0.
        }

        else  //The else part store the characters upto the above if elif condition true and also increase the c value.
        {
            temp[CharCount]=Sentence[i];
            CharCount++;
        }
    }
    return ReverseSentence;
}

//This function is used to reverse the string.

char* revstr(char*str)
{
    int l = strlen(str);

    for(int i=0;i<strlen(str)/2;i++)
    {
        char temp = str[i];
        str[i]=str[(l-1)-i];
        str[(l-1)-i]=temp;

    }

    return str;
}
