#include<stdio.h>
int addition(int,int);
int sub(int,int);
extern int mul(void);
extern float div(float,float);
int a=20,b=10;
int main(){
    static float e=2.0,f=1.0;
    printf("Addition is    :%d\n",addition(a,b));
    printf("subtraction is :%d\n",sub(a,b));
    printf("Multiplication :%d\n",mul());
    printf("Division       :%f",div(e,f));

    return 0;
}
int addition(int a,int b){
    auto int c;
    c=a+b;
    return c;
}
int sub(int a,int b){
    register int c;
    c=a-b;
    return c;
}
