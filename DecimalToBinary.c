#include<stdio.h>
long long DecimalToBinary(int n);
int main(){
    int n;
    printf("Enter the Decimal Number:");
    scanf("%d",&n);//To read the decimal number
    printf("%lld",DecimalToBinary(n));//To convertDecimalToBinary and Display the result
    return 0;
}
long long DecimalToBinary(int n){
    long long result=0; // To store the Binary Value
    int i=1,rem;
    while(n!=0){
        rem = n%2; // To get the last digit
        n=n/2;// To get number before last digit
        result+=rem*i;//Multiply the digit with Position values of decimal
        i=i*10;// To collect position values
    }
    return result;//return the binary number
}
