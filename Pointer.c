#include<stdio.h>
int sum(int*);
void dp(int**);
int main(){
    //Double pointer
    int *ptr=NULL;//To create single pointer and initialize with null
    int **ptr1=NULL;//To create double pointer and initialize with null
    int a = 10;
    ptr1 = &ptr;//ptr1 stores the address of ptr that is double pointer
    ptr = &a;//ptr stores the address of a
    display(ptr);//pass the single pointer ptr to display function
    printf("%d\n",*ptr);//dereference the ptr
    dp(ptr1);//pass the double pointer ptr1 to display function
    printf("%d",**ptr1);//dereference the ptr1
    return 0;
}
//This function change the 'a' value using single pointer
void display (int *ptr){
    *ptr = 40;
}
//This function change the 'a' value using double pointer
void dp(int **ptr1){
    **ptr1 = 50;
}
