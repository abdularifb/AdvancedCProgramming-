//Permutation Of a Given String

#include<stdio.h>
#include<string.h>

void PermutationString(char * , int , int );

char* swap(char*,int,int);

int main()
{
  char string[] = "ABC";

  int StrLen = strlen(string);

  PermutationString(string,0,StrLen);

}


void PermutationString(char *string,int start, int end)
{
    int i,j;

    for(i = start; i < end-1; ++i)
    {
        for(j = i+1; j < end; ++j)
        {
            swap(string,i,j);

            PermutationString(string , i+1 ,end);

            swap(string,i,j);
        }
    }

    printf("%s\n",string);
}

//Swap the characters in the given String

char* swap(char* string,int i,int j)
{
        char temp;

        temp = string[i];
        string[i] = string[j];
        string[j] = temp;

        return string;
}
