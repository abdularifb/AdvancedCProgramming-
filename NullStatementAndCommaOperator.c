#include<stdio.h>
int main(){
    int a,b;//This is comma seperator not operator
    a = 10,20; //== operator is higher precedence compare with comma operator so first value assign to a
    b = (10,20);//() operator is higher precedence compare with = operator so first value is evaluated and second or last value will be stored in b
    //Find the maximum value a or b
    if(a>b){
       printf("a = %d is maximum",a);
    }
    else if(a<b){
        printf("b = %d is maximum",b);
    }
    else{
        ;//That is the null statement is used to no definition included in the body
    }
    return 0;
}
