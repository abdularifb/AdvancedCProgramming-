#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned char *byte_pointer;

long long DecimalToBinary(int);

char* FractionalToBinary(float);

char* ShiftDotInBinary(char []);

int count=0;

int main()
{
    float num = 10.75;

    char s[32];

    char Mantisa[32];

    char Result[32];

    char signbit;

    int i=0;

    int decimalpart = (int)num;

    float fractional = num - decimalpart;

    sprintf(s,"%lld.",DecimalToBinary(decimalpart));

    strcat(s,FractionalToBinary(fractional));

    strcpy(Mantisa,ShiftDotInBinary(s));

    if(num>0)
    {
        signbit = '0';
    }
    else
    {
        signbit = '1';
    }

    Result[0] = signbit;

    sprintf(Result+1,"%lld",DecimalToBinary(127+count));

    for(i=0; i<strlen(Mantisa);i++)
    {
        if(Mantisa[i]=='.')
        {
           break;
        }
    }

    int len = strlen(Result);

    strcat(Result,Mantisa+i+1);

    printf("%s\n",Result);

    return 0;
}

long long DecimalToBinary(int n)
{
    long long result = 0;
    int i = 1;
    int rem;

    while(n != 0)
    {
        rem = n % 2;
        n = n/2;
        result += rem * i;
        i = i * 10;
    }

    return result;
}

char* FractionalToBinary(float fractional)
{
    static char result[32];

    int i;

    for(i=0;i<24;i++)
    {
        fractional = fractional * 2;
        int decimalpart = (int)fractional;
        fractional = fractional-decimalpart;
        result[i] = decimalpart + '0';
    }

    return result;
}

char* ShiftDotInBinary(char s[])
{
    static char ResultString[32];
    int IndexCounter = 0;
    int TrackCount=0;

    for(int i=0; i<strlen(s); i++)
    {
        if((s[i]=='1') && (TrackCount==0))
        {
          ResultString[IndexCounter++] = s[i];
          ResultString[IndexCounter++] = '.';
          TrackCount++;
          printf("Track =%d\n",TrackCount);
        }

        else
        {
            if((s[i]!='.')&&(TrackCount==1))
            {
                printf("Hello\n");
                count++;
            }
            if(s[i]=='.')
            {
                printf("hello1\n");
                TrackCount++;
                continue;
            }

            ResultString[IndexCounter]= s[i];
            IndexCounter++;
        }
    }

    ResultString[IndexCounter]='\0';

    return ResultString;
}
