#include<stdio.h>
int main(){
    FILE *ptr = fopen("input.txt","r");//To open the file in read mode
    FILE *ptr1 = fopen("input.txt","r");//To create Another pointer because find the character count
    printf("%d\n",wordcount(ptr));//To print the wordcount
    printf("%d",charcount(ptr1));//To print the character count
    return 0;
}
int wordcount(FILE*ptr){
    int ct=0;
    //To count the word using fscanf
    while(fscanf(ptr,"%s")!=EOF){
        //printf("%s\n",s);
        ct++;
    }
    return ct;
}
int charcount(FILE*ptr){
     int ct1=0;
    //To count the character using fgetc or getc
    while(fgetc(ptr)!=EOF){
        //printf("%c\n",c);
        ct1++;
    }
    return ct1;
}
