//This Program to find the Longest Common Prefix of the given Array of Strings.

#include<stdio.h>
#include<string.h>

#define SIZE1 50
#define SIZE2 60

char* LongestCommonPrefixFunc(char[][SIZE2],int);

char* Compare(char[],char[]);

int main()
{
    char ArrayOfString[][SIZE2] = {"geeksforgeeks", "geeks", "gee", "gek"};

    int count = sizeof(ArrayOfString)/sizeof(ArrayOfString[0]);

    printf("The Longest Common Prefix is : %s\n", LongestCommonPrefixFunc(ArrayOfString,count));
}

//This function return Longest Common prefix of the array Of strings.

char* LongestCommonPrefixFunc(char ArrayOfString[][SIZE2],int count)
{
    static char ResultString[SIZE2];

    for(int i=0; i<count; i++)
    {

        if(i == 0)
        {
            strcpy(ResultString, Compare(ArrayOfString[i], ArrayOfString[i+1]));
            i++;

        }
        else
        {
            strcpy(ResultString, Compare(ArrayOfString[i], ResultString));
        }

    }

    return ResultString;
}

//This Function compare two strings and return common prefix.

char* Compare(char FS[], char SS[])
{
    static char CompareString[SIZE1];
    int len;
    int ArrayIndexCounter =0;

    if(strlen(FS)>=strlen(SS))
    {
        len = strlen(SS);
    }

    else
    {
        len = strlen(FS);
    }

    for(int i=0; i<len; i++)
    {
        if(FS[i]==SS[i])
        {
            CompareString[ArrayIndexCounter]=FS[i];
            ArrayIndexCounter++;
        }

        else
        {
            break;
        }
    }

    CompareString[ArrayIndexCounter]='\0';

    return CompareString;
}
