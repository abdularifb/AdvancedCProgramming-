#include<stdio.h>
#include<malloc.h>
int main(){
    char s[100];
    int *ptr = (int*)malloc(10);
    *ptr = 15000;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    realloc(ptr,2);
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    printf("%d",sizeof(ptr)/sizeof(int));
    return 0;
}

