#include<stdio.h>

int StrLen(char*);

void strcopy(char[], char[]);

int StringCompare(char[], char[]);

char* strstr(char*,char*);

char* strcat(char*, char[]);

char* Memcopy(char*, char*, int);

char* my_memmove(char*, char*,int);

int main()
{
    char Dest[] = "Abdul Arif B";

    char Source[] = "learningisfun";

    char Destination[StrLen(Source)];

    //strcopy(Destination,Source);

    //printf("In main: %d\n",StringCompare(Source,Destination));

    //printf("%s\n",strstr(OrginalString,Source));

   printf("%s\n",my_memmove(Source+8,Source,10));

    //printf("%s\n",Memcopy(Source+8,Source,10));

    //printf("%s\n",strcat(OrginalString,Source));

    return 0;
}

int StrLen(char* s)
{
    int StringLen = 0;

    for(int i=0; s[i]!='\0'; i++)
    {
            StringLen++;
    }

    return StringLen;
}

void strcopy(char Destination[], char Source[])
{
    int i;

    for(i=0; i<StrLen(Source); i++)
    {
        Destination[i]=Source[i];
    }

    Destination[i] = '\0';
}

int StringCompare(char String1[], char String2[])
{
    for(int i=0; i<StrLen(String1); i++)
    {
        if(StrLen(String1)!=StrLen(String2))
        {
            return 1;
        }
        else if(String1[i]!=String2[i])
        {
            return 1;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

char* strstr(char* s1,char* s2)
{
    int flag = 0;

    int IndexCounter = 0;

    static char ResultString[50];

    for(int j=0;j<StrLen(s1);j++)
    {
        if(s1[j]==s2[0])
        {
            int JIndex = j;

            for(int k=1;k<StrLen(s2);k++)
            {
                if(s1[++JIndex]==s2[k])
                {
                    flag = j;
                }
                else
                {
                    flag = -1;
                    break;
                }
            }
        }
    }

    for(int i=flag;i<StrLen(s1);i++)
    {
        ResultString[IndexCounter++] = s1[i];
    }

    ResultString[IndexCounter] = '\0';

    return ResultString;
}

char* strcat(char* dest, char src[])
{
    int Destlen = StrLen(dest);

    for(int i=0; i<StrLen(src); i++)
    {
        dest[Destlen++] = src[i];
    }

    dest[Destlen] = '\0';

    return dest;
}

char* Memcopy(char* b, char* a, int n)
{
    int i;
    for ( i=0; i<n; i++)
    {
        b[i] = a[i];
    }
    b[i]='\0';
    return b;
}

char* my_memmove(char* dest,char* src, int n)
{
    char *tmp  = (char *)malloc(sizeof(char ) * n);
    if(NULL == tmp)
    {
        return NULL;
    }
    else
    {
        int i = 0;



       for(i =0; i < n ; ++i)
        {
            *(tmp + i) = *(src + i);
        }



       for(i =0 ; i < n ; ++i)
        {
            *(dest + i) = *(tmp + i);
        }
        free(tmp);
    }
    return dest;
}
