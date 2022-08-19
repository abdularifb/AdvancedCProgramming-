#include<stdio.h>
#include<pthread.h>
//To create mutex and condition variable in static
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int total=1;
void display1(int a){
    pthread_mutex_lock(&lock);//Mutex lock
    printf("It is waiting\n");
    pthread_cond_wait(&cond,&lock);//To wait the thread until send the signal.
    printf("%d\n",a+total);
    pthread_mutex_unlock(&lock);//Mutex Unlock
}
void display2(){
    printf("To send the signal\n");
    pthread_cond_signal(&cond);//To send the signal.
}
int main(){
    pthread_t t1,t2;
    pthread_create(&t1,NULL,display1,(void*)10);//To create the thread for display and 10 as argument.
    pthread_create(&t2,NULL,display2,NULL);//To create the thread for display.
    pthread_join(t1,NULL);//To join the thread to main thread and also terminating the user defined thread.
    pthread_join(t2,NULL);//To join the thread to main thread and also terminating the user defined thread.
    return 0;
}
