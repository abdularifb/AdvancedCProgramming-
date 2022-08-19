#include<stdio.h>
int sum(int num){
    static int a;
    a = a+num;
    return a;
}
int main(){
    printf("%d\n",sum(25));
    printf("%d\n",sum(15));
    printf("%d",sum(30));
    return 0;
}
