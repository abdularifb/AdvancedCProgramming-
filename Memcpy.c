#include<stdio.h>
#include<string.h>
//Copy the value one memory address to another memory address that is called memcpy.
int main(){
    /*
    int a = 10;
    int b;
    int *ptr=&a;
    int *ptr1=&b;
    memcpy(ptr1,ptr,sizeof(int));
    printf("%d %d\n",&a,&b);*/
    int source[10]={1,2,3,4,5,6,7,8,9,10};
    int destination[10];
    memcpy(source+2,source,sizeof(int)*8);
    for(int i=0;i<10;i++){
        printf("%d\n",source[i]);
    }
    return 0;
}
