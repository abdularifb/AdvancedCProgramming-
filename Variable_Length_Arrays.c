#include<stdio.h>
int main()
{
    static int a=1;
    int i;
    scanf("%d",&a);
    int arr[a];
    //printf("%d",a);
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
