#include<stdio.h>
#include<string.h>
//Command line arguments input is a and Arif.txt
int main(int argc,char* argv[]){
    char ch = argv[1][0];//To store the character to find the string which is match the character
    char s[100];//To store the line by line sentences in a file
    FILE *ptr;//It is the file stream
    ptr = fopen(argv[2],"r");//To open the file in read mode
    while(!feof(ptr)){ // The file stream in end of file it will return non negative otherwise zero
        fgets(s,"\n",ptr);//To get one line sentence in a file
        //To find the string which is matched to a character and display it
        for(int i=0;i<strlen(s);i++){
            if(s[i]==ch){
                printf("%s",s);
                break;
            }
        }
    }
    return 0;
}
