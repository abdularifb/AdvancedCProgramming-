#include<stdio.h>
#include<math.h>

int AlternateMUL(int,int);
void AlternateDivide(int,int);

int main()
{
    AlternateDivide(20,10);

    printf("%d\n",AlternateMUL(0,20));

    return 0;
}

void AlternateDivide(int a, int b)
{
    int PlusOrMinus = ((a<0) ^ (b<0)) ? -1 : 1;

    int quotient = 0;

    while(a>=b)
    {
        a = a - b;
        quotient++;
    }

    printf("Quotient = %d\n",quotient);
}

int AlternateMUL(int a, int b)
{
        if (b == 0)
            return 0;

        if (b > 0)
            return (a + AlternateMUL(a, b - 1));

        if (b < 0)
            return -AlternateMUL(a, -b);

        return -1;
}
