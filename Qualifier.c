#include<stdio.h>
int main(){
    volatile int b;
    volatile int *ab;
    b=10;
    ab=&b;
    printf("%d\n",*ab);
    if(b>0){
        printf("b is greater than 0\n");
    }
    else{
        printf("b is not greater than 0\n");
    }
    int* restrict c;
    int a =10;
    c = &a;
    printf("%d",++*c);
    return 0;
}
