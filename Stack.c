#include<stdio.h>
int main(){
    char s[10];
    int i;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%c",&s[i]);
    }
    for(i=0;i<n;i++){
        printf("%c",s[i]);
    }
    return 0;
}
