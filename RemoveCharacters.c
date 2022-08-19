#include<stdio.h>
#include<string.h>
void removecharacters(char[]);
int main(){
    char s[]="Arif**(&&";
    removecharacters(s);
    return 0;
}
void removecharacters(char s[]){
    int len = strlen(s);
    for(int i=0;i<len;i++){
            if(!((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))){
                for(int k=i;k<strlen(s);k++){
                    s[k]=s[k+1];
                }
                len--;
                i--;
            }
        }
        printf("%s",s);
}
