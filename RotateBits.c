//This program rotate the bits and print the decimal value of rotating bits.

#include<stdio.h>

int main()
{
    int n;
    int d;

    printf("Enter n value : ");
    scanf("%d",&n);

    printf("Enter how many rotation : ");
    scanf("%d",&d);

    printf("Left shift of %d in decimal is : %d\n",d,n<<d);
    printf("Right shift of %d in decimal is : %d\n",d,n>>d);

    return 0;
}



/*long long DecimalToBinary(int n)
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


int ConevertBtoD(long long bin)
{
    int ba = 0;
    int sum = 0;
    int digit;

    while(bin > 0)
    {
        digit = bin % 10;
        sum = sum + (digit * pow(2,ba));
        bin = bin/10;
        ++ba;
    }
   return sum;
}
*/
