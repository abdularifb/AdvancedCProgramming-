//This Program To find the minimum number of notes for given amount.

#include<stdio.h>

void currency(unsigned int);

int main()
{
    unsigned int Amount;

    printf("Enter N value : ");
    scanf("%d",&Amount);

    currency(Amount);

    return 0;
}

void currency(unsigned int Amount)
{
    if(Amount == 0)
    {
        printf("Invalid Amount\n");
    }

    if(Amount>=100)
    {
        printf("100 = %d\n",Amount/100);
        Amount%=100;
    }

    if(Amount>=50)
    {
        printf("50 = %d\n",Amount/50);
        Amount%=50;
    }

    if(Amount>=10)
    {
        printf("10 = %d\n",Amount/10);
        Amount%=10;
    }

    if(Amount>=5)
    {
        printf("5 = %d\n",Amount/5);
        Amount%=10;
    }

    if(Amount>=2)
    {
        printf("2 = %d\n",Amount/2);
        Amount%=2;
    }

    if(Amount>=1)
    {
        printf("1 = %d\n",Amount/1);
        Amount%=1;
    }
}
