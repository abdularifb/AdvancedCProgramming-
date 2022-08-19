#include<stdio.h>
#include<pthread.h>
void sum(){
    printf("Id of sum is : %d\n",pthread_self());//To print the id of sum thread.
    int a=10,b=20;
    int s= a+b;
    printf("%d\n",s);
}
int main(){
    pthread_t thread1;//To create thread
    if((pthread_create(&thread1,NULL,(void*)(&sum),NULL)!=0)){//To  run the sum function using thread1.
       printf("Thread is not created\n");
    }
    if(pthread_equal(thread1,pthread_self())){//To check main thread and user define thread1 is equal or not.
        printf("Is equal\n");
    }
    else{
        printf("Not equal\n");
    }
    printf("Main Thread id is : %d\n",pthread_self());//To print main thread id

    pthread_join(thread1,NULL);//To join the thread to main thread and terminate the thread.
}
