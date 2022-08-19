#include<stdio.h>
#pragma startup sum
#pragma end product
//To display some warnings of undefined behavior of program using below pragma warn directives
#pragma warn -rvl
#pragma warn -par
#pragma warn -rch
void __attribute__((constructor))sum(int,int);
int __attribute__((destructor))product(int,int);
int main(){
    printf("I am here in  main  method\n");
    //sum(10,20);
    //product(10,20);
    return 0;
    printf("I am here in end of main  method\n");//This is unreachable code because this statement after the return statement.so it will raise the pragma rch warning
}
void sum(int a,int b){
    printf("%d + %d =%d\n");//This case the arguments could not be used.so it will raise the pragma par warning
}
int product(int a,int b){//This case the method should not return any value.so it will raise the rvl  warning
     printf("%d * %d =%d\n",a,b,a*b);
}
