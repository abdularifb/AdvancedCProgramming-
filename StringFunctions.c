#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fre(char[]);
int main(){
    char s[20]="aabbcc";
    fre(s);
    return 0;
}

void fre(char s[]){
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]==' '){
            continue;
        }
        int ct=1;
        for(int j=i+1;j<len;j++){
            if(s[i]==s[j]){
                for(int k=j;k<strlen(s);k++){
                    s[k]=s[k+1];
                }
                ct++;
                len--;
                j--;
            }
        }
        printf("%c = %d\n",s[i],ct);
    }
}
