#include <stdio.h>
#include <stdlib.h>
int result(void);
int arif(void);
int c;
#define MAX(a,b) if(a>b)\
                    printf("%d is max",a);\
                 else \
                    printf("%d is max",b);
int main(void)
{
    //int variable with block scope and temporary storage
    auto int a;
    int v=1;
    void a1(){
        static int v = 1;
        v=20;
        //printf("%d",v);
    }
    a1();
    //printf("%d",arif());

    #undef MAX

    MAX(5,3);

    return 0;
}

