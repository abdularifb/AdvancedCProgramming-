#include<stdio.h>
void bitwise(int a,int b);
long long DecimalToBinary(int n);
int main(){
    int a,b;
    printf("Enter a and b value:");
    scanf("%d %d",&a,&b); // To read a and b values
    bitwise(a,b); // pass a and b values into bitwise function
    return 0;
}
void bitwise(int a,int b)
{
    printf("a & b = %d\n",DecimalToBinary(a&b));//Calculate a & b and display into binary format
    printf("a | b = %d\n",DecimalToBinary(a|b));//Calculate a | b and display into binary format
    printf("a ^ b = %d\n",DecimalToBinary(a^b));//Calculate a ^ b and display into binary format
    printf("~a = %d\n",DecimalToBinary(~a));//Calculate ~a and display into binary format
    printf("~b = %d\n",DecimalToBinary(~b));//Calculate ~b and display into binary format
    printf("a>>2 = %d\n",a>>2); //Calculate right shift of a by 2 places in a number
    printf("a<<2 = %d\n",a<<2); //Calculate left shift of a by 2 places in a number

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
