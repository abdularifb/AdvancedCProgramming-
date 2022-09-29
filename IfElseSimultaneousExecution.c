//This program execute if else Simultaneously.

#include<stdio.h>

void SE(int);

int main()
{
    int n;
    scanf("%d",&n);

    SE(n);

    return 0;
}
void SE(int n)
{
    int ct= 0;

    if(n<0)
    {
        ifpart:

            printf("The number is less than zero\n");

            if(ct==0)
            {
                ct=1;
                goto elsepart;
            }
    }
    else
    {
        elsepart:

            printf("The number is greater than zero\n");

            if(ct!=1)
            {
                ct=1;
                goto ifpart;
            }
    }
}
