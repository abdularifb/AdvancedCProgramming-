#include<stdio.h>
extern int addition(int,int);
extern int sub(int,int);
extern int a,b;
int mul(void);
float div(float,float);
int mul(){
    auto int c=(a*b)*addition(a,b);
    return c;
}
float div(float e,float f){
    auto float c = e/f;
    return c;
}
