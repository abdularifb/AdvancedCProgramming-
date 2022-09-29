//This Program print number upto user input.

#include<stdio.h>

int rfun(int);

int main()
{
    int n;
    rfun(n);//To call the recursive function

    return 0;
}
int rfun(int n)
{
    //To check the terminated condition of recursive function
    if(n>100)
    {
        return 0;
    }

    printf("%d\n",n);

    return rfun(n+1);//To increase the n value and pass into rfun function.
}
