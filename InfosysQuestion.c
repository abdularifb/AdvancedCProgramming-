#include<stdio.h>
int main(){
    int n=3;
    int arr[]={1,2,1};
    int swapcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            continue;
        }
        else if((arr[i]%2==0) && (arr[i+1]%2!=0)){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swapcount++;
            i=-1;
        }
        else{
            continue;
        }
    }
    printf("%d\n",swapcount);
    return 0;
}
