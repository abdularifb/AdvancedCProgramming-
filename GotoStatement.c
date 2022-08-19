#include<stdio.h>
int main(){
    int ct=0;
    for(int i=1;i<=5;i++){
        if(i==1){
            //printf("*%*s",i);
            printf("*\n");
        }
        else if(i<=4){
            ct=ct+2;
            printf("*%*s",ct,"*\n");

        }
        else{
            printf("**");
            //printf("%d",ct);
            goto asterisks;
        }
    }
    asterisks:
        for(int i=0;i<ct;i++){
             printf("*");
        }

    return 0;
}
