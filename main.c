#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define SIZE1 5
#define SIZE2 50

void SubstringDetection(char[][SIZE2],int);

char* ValidString(char[],char[]);

int main()
{
    char String[50];
    char twoDarr[SIZE1][SIZE2];
    int count = 1;

    printf("Enter the string\n");
    gets(String);

    strcpy(twoDarr[0],String);

    SubstringDetection(twoDarr,count);

    return 0;
}

void SubstringDetection(char twoDarr[][SIZE2],int count)
{

    static char temp[50];
    char NextString[50];
    char *ReturnString;
    int loopCount=0;

    while(count<=5)
    {
        printf("Enter the string\n");
        gets(NextString);

        for(int l=0; l<count; l++)
        {
            strcpy(temp,twoDarr[l]);

            ReturnString = ValidString(temp,NextString);


            if(ReturnString==NULL)   //invalid
            {

                loopCount=0;
                break;
            }
            else
            {
                loopCount++;
            }

        }

        if(loopCount==count)
        {
            strcpy(twoDarr[count],ReturnString);
            count++;
            loopCount=0;
        }

    }

}

char* ValidString(char temp[],char NextString[])
{

    char subStr[50];

    int k=0,subStrcount=0;

    for(int i=0;i<strlen(temp);i++)       //if substring of 3 continuous chars is duplicated
    {
        for(int j=0;j<strlen(NextString);j++)
        {

            if(temp[i]==NextString[j])
            {

                subStrcount++;
                subStr[k++]=temp[i];
                i++;

                if(subStrcount==3)
                {
                    subStr[k]='\0';
                    printf("Invalid as %s repeats\n",subStr);
                    return NULL;            //invalid
                }
            }

            else
            {
                subStr[k]='\0';
                subStrcount=0;
                k=0;
            }

        }
    }

    return NextString; //valid
}
