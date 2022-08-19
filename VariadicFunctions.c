#include<stdio.h>
#include<stdarg.h>
int SumOfNumbers(int count,...);
int main(){

    printf("sum=%d\n",SumOfNumbers(2,10,20));//To first argument is a fixed argument and also specify the number of arguments.The arguments pass into SumOfNumbers function.
    printf("sum=%d\n",SumOfNumbers(4,10,20,30,40));
    printf("sum=%d",SumOfNumbers(10,10,20,30,40,50,60,70,80,90,100));

    return 0;
}
//This is variadic function
int SumOfNumbers(int count,...){
    int sum = 0;//To declare sum variable for storing sum results
    va_list prag;//This is the name of the list
    va_start(prag,count);//To define the start and end position
    while(count>0){
        sum = sum + va_arg(prag,int);//To get the list values and add into sum
        count--;//To decrement the count for looping purpose
    }
    return sum;//return the sum value
}
