//This program Find Two strings equal or not

#include<stdio.h>
#include<string.h>
#define SIZE1 100
#define SIZE2 100

void StringComparision(char[],char[]);

int main()
{
    char string1[SIZE1];
    char string2[SIZE2];

    printf("Enter the two Strings : ");
    scanf("%s %s",&string1,&string2);

    StringComparision(string1,string2);

}

//This Function check whether two strings equal or not

void StringComparision(char string1[],char string2[])
{

    if(strlen(string1)!=strlen(string2))
    {
        printf("The two string is not equal\n");
    }
    else
    {
        for(int i=0; i<strlen(string1); i++)
        {
            if(string1[i]==string2[i])
            {
                if(i == strlen(string1)-1)
                {
                    printf("The Two Strings is Equal\n");
                }
            }
            else
            {
                printf("The two string is not equal\n");
                break;
            }
        }
    }
}
