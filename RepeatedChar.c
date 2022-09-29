#include<stdio.h>
int fun(char*,char*);
int main(){
   int n=2;
   char *s1,*s2,*s3,*s4,*s5;
   for(int k=1;k<=n;k++){
        switch(k){
        case 1:
            scanf("%s",s1);
            break;
        case 2:
            start:
                scanf("%s",s2);
                if(fun(s1,s2)==1){
                    goto start;
                }
                else{
                        break;
                }
        default:
            printf("Errror");

        }
   }
   return 0;
}
int fun(char*s1,char*s2){
    for(int i=0;i<strlen(s2);i++){
        printf("%c\n",s2[i]);
        for(int j=0;j<strlen(s1);j++){
            printf("%c",s1[j]);
            if(i>=strlen(s2)-2 || j>=strlen(s2)-2)
                printf("%d %d That is end\n",i,j);
                break;
            if(s2[i]==s1[j]){
                if((s1[j+1]==s2[i+1]) && (s1[j+2]==s2[i+2])){
                    printf("s1[%d]=%c\ns2[%d]=%c\ns1[%d]=%c\ns2[%d]=%c\ns1[%d]=%c\ns2[%d]=%c\n",j,s1[j],i,s2[i],j+1,s1[j+1],i+1,s2[i+1],j+2,s1[j+2],i+2,s2[i+2]);
                    return 1;
                }
                else{
                    printf("Continue statement\n");
                    continue;
                }
            }
        }
    }
    return 0;
}
