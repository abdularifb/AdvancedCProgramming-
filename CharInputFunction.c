#include <stdio.h>
int main(){
    FILE *ptr = fopen("Input.txt","r");//To Open the file in read mode
    char s;
    s=getchar();//To read character from console using getchar function
    putchar(s);//To display the character using putchar fuction
    putchar("/n");//To add new line using putchar function
    fputc('h',ptr);//it is used to put the single character into the file
    putc('g',ptr);// it is same as fputc
    ungetc('i',ptr);//it will be add character to input stream

    while((s=fgetc(ptr))!=EOF){ //fgetc used to read the single character and getc same as fgetc
        printf("%c",s);
    }


    return 0;
}
