#include<stdio.h>
char* convertbinary(int);
int main(){
    printf("%s\n",convertbinary(10));
    return 0;
}
char* convertbinary(int n){
    printf("binary");
    int rem=0;
    char a[]="";
    char itos[]="";
    while(n>=0){
        printf("Hello");
        rem = n %2;
        sprintf(itos,"%d",rem);
        strcat(a,itos);
        printf("%s\n",a);
        n = n/2;
    }
    return a;
}
