#include<stdio.h>

long long DecimalToBinary(int);

//void CalculateChecksum(long long,)

int main()
{
    int a[]= {10,20,30,40,1000};

    int len = sizeof(a)/sizeof(a[0]);

    long long BinaryArray[len];

    for(int i=0; i<len; i++)
    {
        BinaryArray[i] = DecimalToBinary(a[i]);
    }

    for(int i=0; i<len; i++)
    {
        printf("%lld\n",BinaryArray[i]);
    }

    return 0;
}

long long DecimalToBinary(int n)
{
    long long result=0;
    int i=1,rem;

    while(n!=0)
    {
        rem = n%2;
        n=n/2;
        result+=rem*i;
        i=i*10;
    }
    return result;
}
