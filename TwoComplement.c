//This Program find two's complement of given binary number

#include<stdio.h>
#include<string.h>

#define SIZE 50

char* FindTwoSComplement(char[]);
char* Toggle(int, char[]);

int main()
{
    char BinaryNumber[SIZE]="10001100";

    printf("%s\n",FindTwoSComplement(BinaryNumber));

    return 0;
}

//This function Returns the two's complement of the binary number.

char* FindTwoSComplement(char BinaryNumber[])
{
    int len = strlen(BinaryNumber);

    static char TwoScomp[SIZE];

    for(int i=len-1; i>=0; i--)
    {
        if(BinaryNumber[i]=='1')
        {
            strcpy(TwoScomp,Toggle(i-1,BinaryNumber));

            break;
        }
        else
        {
            continue;
        }
    }

    return TwoScomp;
}

//This Function Toggle the bits after 1 position reached.

char* Toggle(int start, char BinaryNumber[])
{
    for(int i = start; i>=0;i--)
    {
        if(BinaryNumber[i]=='1')
        {
            BinaryNumber[i]='0';
        }
        else
        {
            BinaryNumber[i]='1';
        }
    }

    return BinaryNumber;
}
