//Check two sentence is anagram or not

#include<stdio.h>
#define SIZE1 20
#define SIZE2 20
#include<string.h>

int CheckAnagram(char[], char[]);
char* Sort(char[]);

int main()
{
    char Word1[SIZE1];
    char Word2[SIZE2];

    printf("Enter the first Word : ");
    scanf("%s",&Word1);
    printf("Enter the second Word : ");
    scanf("%s",&Word2);

    int val = CheckAnagram(Word1, Word2);

    if(val == 1)
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}

//This Function returns the two words anagram or not

int CheckAnagram(char Word1[], char Word2[])
{
    char* s1 = Sort(Word1);

    char* s2 = Sort(Word2);

    if(!strcmp(s1,s2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//This function return the sorted array

char* Sort(char Word[])
{

    for(int i=0; i<strlen(Word); i++)
    {
        for(int j=i+1; j<strlen(Word); j++)
        {

            if(Word[i]>Word[j])
            {
                char temp = Word[i];
                Word[i] = Word[j];
                Word[j] = temp;
            }

        }
    }
    return Word;
}
