//This program to pass the double pointer to another function

#include<stdio.h>

void fun(int**);

int main()
{

    int a;
    printf("Enter a value : ");
    scanf("%d",&a);

    int **ptr;
    int *ptr1 = &a;
    ptr = &ptr1;

    fun(ptr);

    printf("Address of Double pointer : %p\n",ptr);
    printf("Address of single pointer : %p\n",ptr1);
    printf("After the function a value : %d\n",a);//After the function call a value will be modified

    return 0;
}

//The fun function print the value of a+20 store into a.

void fun(int **ptr)
{

    printf("Address of double pointer in fun function : %p\n",ptr);

    **ptr+=20;
}

