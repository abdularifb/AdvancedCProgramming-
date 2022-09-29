//This program to find sum of digits.

#include<stdio.h>

int SumOfDigits(int);

int main()
{
    int n=0;

    printf("Enter n value:");
    scanf("%d",&n);//Read n value from the keyboard

    printf("Sum of digit is :%d\n",SumOfDigits(n));

    return 0;
}

int SumOfDigits(int n)
{
    int sum=0,rem=0;

    while(n>0)
    {
        rem=n%10;//To find the last digit
        sum = sum + rem;//The last digit accumulate into sum.
        n=n/10;//To find the remaining digits except last digit.
    }

    return sum;
}
