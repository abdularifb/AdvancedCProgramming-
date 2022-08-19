#include<stdio.h>
int prime(void);
#define n 53

int main(){
    prime();
    return 0;
}
int prime(){
    int i,ct=1;
    for(i=2;i<=n;i++){
        if(n%i==0){
            ct++;
        }
    }
    if(ct==2){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d not a prime number",n);
    }
}
#undef n
