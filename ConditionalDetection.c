//To find the given number is odd or even without using conditional statements.

#include<stdio.h>

int EvenOrOdd(int);

int main()
{
    int n;
    char * arr[2]={"Even","Odd"};

    printf("Enter n Value : ");
    scanf("%d",&n);

    printf("%s",arr[EvenOrOdd(n)]);
    return 0;
}

//This function returns whether the given number is is divisible by 2 or not.

int EvenOrOdd(int n)
{
    int rem = 0;
    rem = n%2;
    return rem;
}
