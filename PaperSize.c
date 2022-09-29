#include<stdio.h>

void paper(int,int,int);

int main(){
    int height,width,n;

    printf("Enter height and width : ");
    scanf("%d %d",&height,&width);

    printf("Enter the number of cuts : ");
    scanf("%d",&n);

    paper(height,width,n);

    return 0;
}

void paper(int height,int width,int n){

    for(int i=0;i<n;i++)
    {

        printf("%d X %d\n",height,width);
        height = height / 2;
        int temp = height;
        height = width;
        width = temp;

    }
}
