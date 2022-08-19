#include<stdio.h>
#include<malloc.h>
struct s{
    int n;
    int array[];
};
int main(){
    struct s *ptr;
    ptr = malloc(sizeof(struct s));
    printf("size os structure :%d\n",sizeof(struct s));
    ptr->array[0]=1;
    printf("first member of array :%d",ptr->array[0]);
    return 0;
}
