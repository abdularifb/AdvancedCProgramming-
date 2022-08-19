#include<stdio.h>
int main(){
    void *ptr;//This is void pointer
    int a =10;
    float b = 20.0;
    char c = 'a';
    ptr = &a;//To store the address of int type of variable into void pointer
    //before dereference the variable must typecast the void pointer into specific type of variable
    printf("%d\n",*((int *)ptr));
    ptr = &b;//To store the address of float type of variable into void pointer
    printf("%f\n",*((float *)ptr));
    ptr=&c;//To store the address of char type of variable into void pointer
    printf("%c\n",*((char *)ptr));
    return 0;
}
