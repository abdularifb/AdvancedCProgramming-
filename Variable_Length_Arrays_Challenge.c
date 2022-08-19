int main(){
    int size,i;
    int arr[size];
    int sum=0;
    printf("Enter the Size of the array\n");
    scanf("%d",&size);

    printf("Enter the Elements of Array\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("%d",sum);

}
