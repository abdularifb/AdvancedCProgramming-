//Mobile Keypad

#include<stdio.h>
#include<string.h>

#define SIZE1 10
#define SIZE2 5


long MKeypad(char*);

int main()
{
    char *Sentence = "hey u";

    MKeypad(Sentence);

    printf("%ld\n",MKeypad(Sentence));

    return 0;
}

long MKeypad(char* Sentence)
{
    int ct = 0;

    int SentenceIndex = 0;

    long Result=0;

    int flag = 0;

    char KeypadTable[SIZE1][SIZE2] = { " ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

    for(int k = 0; k<strlen(Sentence);k++)
    {
        flag = 0;

        for(int i=0; i<SIZE1; i++)
        {

            for(int j=0; j<strlen(KeypadTable[i]); j++)
            {

                if(Sentence[k] == KeypadTable[i][j])
                {
                    flag=1;

                    for(int l=0; l<=j; l++)
                    {
                        Result = (Result * 10) + i;

                    }
                    break;

                }
            }
            if(flag)
            {
                break;
            }
        }
    }

    return Result;
}
