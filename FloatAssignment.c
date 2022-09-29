#include <stdio.h>

int main()
{
    float FloatVal = 10.75;

    int MemoryValue = *(int*)(&FloatVal);

    char bits[32];

    int i;


   for(i=0; i < 32; i++)
    {
        bits[32-i-1] = (MemoryValue&1) + '0';
        MemoryValue = MemoryValue >> 1;
    }

   bits[32]='\0';

   printf("\nThe floating point representation is:\n %s", bits);



   return 0;
}
