#include<stdio.h>
int main(){
    const int a = 10;
    int b = 20;
    const int * ptr=&b;
    int * const ptr1=&b;
    const int * const p=&b;
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",i,a,i*a);
    }

    //const int * ptr only the address will be modified the value will not be changed
    ptr=&a;
    printf("%d\n",(*ptr));

    //int * const ptr1 only value will be modified the address will not be changed
    *ptr1=50;
    printf("%d\n",(*ptr1));

    //const int * const p the value and address will not be changed
    printf("%d",(*p));

    return 0;
}
