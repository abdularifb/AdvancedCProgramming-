//This Program Covert Roman to Decimal

#include<stdio.h>
#include<string.h>
#define SIZE 50

int DecimalValue(char[]);
int value(char);

int main()
{
    char RL[SIZE];

    printf("Enter the Roman value : ");
    gets(RL);

    printf("Decimal Value Of Roman : %d\n",DecimalValue(RL));

    return 0;
}

//This Function Return the Decimal value of Roman Number.

int DecimalValue(char RL[])
{
    int DVal = 0;

    for(int i=0; i<strlen(RL); i++)
    {

        if(value(RL[i]) >= value(RL[i+1]))
        {
            DVal = DVal + value(RL[i]);

        }
        else
        {
            DVal=DVal+(value(RL[i+1])- value(RL[i]));
            i++;

        }

    }
    return DVal;
}

//This function returns the specific value of Roman Letters.

int value(char s)
{
    int value;
    switch(s)
    {
         case 'I':
              value = 1;
              break;

         case 'V':
             value = 5;
             break;

         case 'X':
             value = 10;
             break;

         case 'L':
             value = 50;
             break;

         case 'C':
             value = 100;
             break;

         case 'D':
             value = 500;
             break;

         case 'M':
             value = 1000;
             break;

         default:
             value = 0;
    }
    return value;
}
