#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    char *ptr;
    int i;
    ptr=(char*) malloc(n*sizeof(char));

    for(i=0;i<n;i++){
        //printf("%d",ptr+i);
        scanf(" %c",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%c ",ptr[i]);
    }
    free(ptr);
    return 0;
}
