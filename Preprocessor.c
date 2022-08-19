#include<stdio.h>
#define s 100
#
int main(){
    printf("File Name is :%s\n",__FILE__);//To print the file name using FILE preprocessor directive
    printf("The line is :%d\n",__LINE__);//To print the Line number using LINE preprocessor directive
    printf("Date is :%s\n",__DATE__);//To print the Date using DATE preprocessor directive
    printf("Time is :%s\n",__TIME__);//To print the Time using TIME preprocessor directive
    #ifndef s //To check s is defined or not if s is defined that will be false
        printf("Arif");
    #endif
    //To check some condition using preprocessor directive
    #if s<100
        #error "MAY ERROR COME"//To display error msg using ERROR preprocessor directive
        printf("Hello");
    #elif s<1000
        printf("S is less than 1000");
    #else
        #undef s
    #endif
    return 0;
}
