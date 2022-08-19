#include<stdio.h>
#include<setjmp.h> // if using setjmp and longjmp must include this header file
void longjump(jmp_buf buffer);
int main(){
    int val;
    jmp_buf buffer;
    val = setjmp(buffer);//it remembers current position and return 0
    if(val!=0){ //To check the setjmp return value
        printf("%d",val);//To print the value
        exit(0);//This statement avoid infinite Loops
    }

    longjump(buffer);//pass the buffer to another function
    return 0;
}
void longjump(jmp_buf buffer){
    longjmp(buffer,10);//set the value 10 and return to setjmp
}
