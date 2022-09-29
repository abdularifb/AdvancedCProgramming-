//This program prints The filename, Line No and Function Name.

#include<stdio.h>
#include<string.h>

char* FileNameWithoutPath(char[]);
void myfun();

void myfun()
{
    printf("%s -> %s -> %d : Hello world",FileNameWithoutPath(__FILE__),__FUNCTION__,__LINE__);

}

//This Function Avoid to print full path of filename.

char* FileNameWithoutPath(char s[])
{
    return strrchr(s, '\\')+1;
}

int main()
{
    myfun();
}
