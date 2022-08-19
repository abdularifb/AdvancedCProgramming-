#include<stdio.h>
#include<math.h>
int ConevertBtoD(long long bin);
int main(){
    long long bin; // To store the binary number
    printf("Enter the binary Number :");
    scanf("%lld",&bin);
    printf("%d",ConevertBtoD(bin));//This Function used to convert the binary number to decimal and display the result
    return 0;
}
int ConevertBtoD(long long bin){
    int ba = 0,sum=0,digit;
    while(bin>0){
        digit = bin%10; // To get the last digit
        //printf("%d\n",digit);
        sum = sum + digit * pow(2,ba);// Multiply the digit with Position values of binary and accumulate using sum
        bin = bin/10; // To get number before last digit
        ++ba;
    }
   return sum;// Display the Decimal value
}
