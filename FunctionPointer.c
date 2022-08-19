#include<stdio.h>
//These are the prototype of a function
void sum(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void display(void(*)(int,int),int,int);
int main(){
    int ch;
    int a,b;
    void (*ptr1[5])(int,int)={sum,sub,mul,div};//To create the array of function pointers
    printf("Enter the choice(0-3):");//Read the user choice
    scanf("%d",&ch);
    printf("Enter a and b value:");
    scanf("%d %d",&a,&b);//Read a and b value
    printf("Arithmetic operations using function pointer with callback function\n");
    //To call the specific function based on user choice
    switch (ch){
    case 0:
        display(&sum,a,b);
        break;
    case 1:
        display(&sub,a,b);
        break;
    case 2:
        display(&mul,a,b);
        break;
    case 3:
        display(&div,a,b);
        break;
    default:
        printf("please enter valid choice\n");
        break;
    }

    printf("Arithmetic operations using array of function pointer\n");
    (*ptr1[ch])(a,b);//To call the specific function based on user choice

    return 0;
}
//This method display the sum of two values
void sum(int a,int b){
    printf("%d + %d = %d\n",a,b,a+b);
}
//This method display the sub of two values
void sub(int a,int b){
    printf("%d - %d = %d\n",a,b,a-b);
}
//This method display the Multiplication of two values
void mul(int a,int b){
    printf("%d * %d = %d\n",a,b,a*b);
}
//This method display the Division of two values
void div(int a,int b){
    printf("%d / %d = %d\n",a,b,a/b);
}
//This method use to call the specific method
void display(void (*ptr)(int,int),int a,int b){
    (*ptr)(a,b);
}
