#include<stdio.h>
int func(int,int,int);
int main(){
    int n = 5;
    int f1=0,f2=1,f3=0;
    //Using iterative method
    /*printf("%d %d ",f1,f2);
    n=n-2;
    for(int i=0;i<n;i++){
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }*/
    //using recursion method
    printf("%d %d ",f1,f2);
    func(n-2,f1,f2);
    return 0;
}
int func(int n,int f1,int f2){
    int f3=0;
    if(n<=0){
        return 0;
    }
    f3=f1+f2;
    f1=f2;
    f2=f3;
    printf("%d ",f3);
    return func(--n,f1,f2);
}
