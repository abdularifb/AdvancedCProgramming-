#include <stdio.h>
#include <stdlib.h>
#define LIMIT 5
#define SIZE1 5
#define SIZE2 50

char* subStringDetection(char twoDarr[][], char str2[])    //str2 is small
{
    int i=0,j=0,count=0,k=0;
    static char subStr[20];
    *subStr='\0';

    for(int l=0; l<)

    for(i=0;i<strlen(str1);i++)       //if substring of 3 continuous chars is duplicated
    {
        for(j=0;j<strlen(str2);j++)
        {

            if(str1[i]==str2[j])
            {
                count++;
                subStr[k++]=str1[i];
                i++;
                if(count==3)
                {
                    subStr[k]='\0';
                    return subStr;
                }
            }

            else
            {
                count=0;
            }

        }
    }
    return NULL;

}

int main()
{
    int i;
    char str1[10];

    char nextStr[20];
    char* temp;
    char* subStr;
    char twoDarr[SIZE1][SIZE2];

    printf("Enter a Input1:");
    gets(str1);

    twoDarr[0][0]=str1;

    for(i=1;i<LIMIT;i++)
    {
        printf("Enter a Input%d:",i+1);
        gets(nextStr);

        subStr=subStringDetection(twoDarr,nextStr);
        while(subStringDetection(temp,nextStr))
        {
            printf("Invalid as %s repeats\n",subStr);
            printf("Input different string\n");
            printf("Enter a Input%d:",i+1);
            *nextStr='\0';
            gets(nextStr);
        }

        *temp='\0';
        strcpy(temp,nextStr);
        *nextStr='\0';
        printf("Valid\n");
        *subStr='\0';

    }

    return 0;
}

/*while(i<strlen(str1))    //if substring of 3 chars is duplicated (not continuous characters)
    {

        if(str1[i]==str2[j])
        {
            count++;

            if(count==3)
            {
                return 1;
            }

            j++;
            i++;
            continue;
        }
        else
        {
            i++;
        }

        return 0;

    }*/
/*while(strlen(str1)<8)
    {
        printf("Invalid\n");
        printf("Input different string\n");
        *str1='\0';
        gets(str1);
    }

    printf("Enter a input2:");
    gets(str2);

    while(strlen(str2)<8)
    {
        printf("Invalid\n");
        printf("Input different string\n");
        *str2='\0';
        gets(str2);
    }
    //str2=isStringLengthLessThanEight(str2);
    */
