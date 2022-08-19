#include<stdio.h>
#include<complex.h>
#define __STDC_WANT_LTB__EXT1__1

int main()
{
    #ifdef __STDC_NO_COMPLEX__
        printf("Complex numbers are not supported");
        exit(1);
    #else
        printf("Complex Numbers are supported.\n");
        double complex cx = 1.0 + 3.0*I;
        double complex cy = 1.0 - 4.0*I;
        double complex sum = cx + cy;
        printf("The addition of cx+cy :%.2f %+.2fi",creal(sum),cimag(sum));
    #endif // __STDC_NO_COMPLEX__

}

