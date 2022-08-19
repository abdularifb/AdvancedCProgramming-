#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter n value:");//Read n value
    scanf("%d",&n);
    printf("%d",sum(n));//print the sum of n value
    return 0;
}
//This is Non tail and direct recursive function
int sum(int n){
    if(n<1){
        return 0;
    }
    return n+sum(n-1);//The function call itself upto n<1  and accumulate the sum
}


