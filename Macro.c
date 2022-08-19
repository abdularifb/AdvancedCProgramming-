#include<stdio.h>
#define sum(a,b) a+b //To calculate sum of two numbers
#define square(a) a*a //To calculate square of a number
#define cube(a) a*a*a //To calculate cube of a number
#define isalph(d) (((d)>='a'&&(d)<='z')||((d)>='A'&&(d)<='Z')) //To check the character is alphabet or not
#define isupp(d) ((d)>='A'&&(d)<='Z') //To check the character is uppercase or lowercase
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);//To read the character
    if(isalph(c))//First check is alpha using isalph macro
       if(isupp(c)){ //To check is uppercase using isupp macro
            printf("%c is uppercase\n",c);
       }
       else{
            printf("%c is lowercase\n",c);
       }
    printf("Sum of A and B :%d\n",sum(10,20));//To print sum of two values using macros
    printf("square of A    :%d\n",square(10));//To print square of a value using macros
    printf("cube of A      :%d\n",cube(10));//To print cube of a value using macros
    return 0;
}
