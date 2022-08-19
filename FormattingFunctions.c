#include<stdio.h>
int prime(int n);
int main(){
    FILE *ptr;//To create the filestream
    int n;//To store the typecasting n value
    char s[100];//To store the string from a file
    ptr = fopen("Arif.txt","r");//To open the file in read mode
    while(!feof(ptr)){//The file stream in end of file it will return non negative otherwise zero
        fscanf(ptr,"%s",s);//To read word by word in file and store into string s
        sscanf(s,"%d",&n);//The word will be converted into string using sscanf Function
        if(prime(n)){//pass the n value to prime function it will return 1 the if condition will be executed
            printf("%d is a prime number\n",n);
        }
        else{ // The prime function return 0 the else part will be executed
             printf("%d is a not prime number\n",n);
        }
    }
    return 0;
}
//To find the number is prime or not
int prime(int n){
    int i,ct=1;
    for(i=2;i<=n;i++){
        if(n%i==0){
            ct++;
        }
    }
    if(ct==2){
        return 1;
    }
    else{
        return 0;
    }
}
