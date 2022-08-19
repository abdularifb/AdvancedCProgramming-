#include<stdio.h>
#include<stdlib.h>
void check();
int comp(const void*,const void*);
void DisplayArray(int[],int);
int main(){
    int i = 30;
    char *password = NULL;
    char *cp = NULL;
    int arr[5]={10,40,20,30,60};
    printf("Enter a password:");
    scanf("%s",&password);//Read the password
    printf("Enter confirm password:");
    scanf("%s",&cp);//Read the confirm password
    qsort(arr,5,sizeof(int),comp);
    DisplayArray(arr,5);
    if(i<20){//Check the condition that will be true to exit the program using exit function
        exit(1);
    }
    printf("I is greater than 20\n");
    if(password==NULL){ //check the password is null or not if the password is null to call the atexit function and passs the check function as argument
        atexit(check);
    }
    else if(password!=cp){//check password is not equal to the confirm password the program will be abort using abort function
        abort();
    }
    else{//all the above condition will be false print this message
        printf("All are Perfect\n");
    }
    return 0;
}
void check(){
    printf("Password is empty please fill it\n");
}
//Sorting process based on the address
int comp(const void *a,const void *b){
    const int p1 = *(const int*)a;//Typecast into int *
    const int p2 = *(const int*)b;//Typecast into int *
    return p1-p2;//subtract the two pointers and the value will be return.
}
//This function is used to display the array values
void DisplayArray(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
