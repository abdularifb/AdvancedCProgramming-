#include<stdio.h>
#include<stdlib.h>
int main()
 {
    int i,n,*ptr;
    printf("\n Enter the limit : ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available\n");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;

}