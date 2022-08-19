#include<stdio.h>
void length(char[]);
int main(){
    char s[]="Abdul Arif";
    length(s);
    return 0;
}
void length(char s[]){
    int ct=0;
    for(int i=0;s[i]!='\0';i++){
        ct++;
    }
    printf("The length of the string:%d",ct);
}
