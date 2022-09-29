//To calculate the checksum Value

#include<stdio.h>

void SumOfValues(int,int);

int main()
{
    int a[]={0x10,0x20,0x30};

    int sum = 0;

    for(int i=0; i<3; i++)
    {
        sum = sum + a[i];
    }

    int checksum = 0x100 - sum;

    SumOfValues(sum,checksum);
}

void SumOfValues(int sum,int checksum)
{
    int result = checksum + sum;

    if(!(result & 0xFF))
    {
        printf("The orginal Value is received\n");
    }
    else
    {
        printf("Some Error Occured\n");
    }
}
