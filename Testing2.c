#include<stdio.h>
struct s{
    int a;
    char b;
    char c;
};
int main(){
    struct s abc[3];
    char *ptr;
    abc[0].a=4;
    abc[0].b='a';
    abc[0].c='c';
    abc[1].a = 5;
    ptr = &abc[0].c;
    printf("%d\n",ptr);
    ptr=ptr+1;
    printf("%d\n",&abc[0]);
    printf("%d\n",&abc[1]);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    ptr=&abc[1].a;
    printf("%d %d\n",ptr,*ptr);
    ptr=&abc[0].a;
    ptr=ptr+1;
    printf("%d %d\n",ptr,*ptr);
    return 0;
}
