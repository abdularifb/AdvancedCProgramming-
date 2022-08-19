#include<stdio.h>
#include<pthread.h>
pthread_mutex_t lock = NULL;//This is mutex variable.
//pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;//This is static creation of mutex.
int total=0;//Global variable
void display(int a){
    pthread_mutex_lock(&lock);//Lock The process.
    total=a;
    printf("%d\n",total);
    pthread_mutex_unlock(&lock);//Unlock the process.
    printf("Unlocked\n");
}
int main(){
    pthread_t t1,t2;
    if(pthread_mutex_init(&lock,NULL)!=0){//This is mutex dynamic creation
        printf("Mutex Initialization failed.\n");
        return 1;
    }
    pthread_create(&t1,NULL,display,(void*)10);//To create the thread pass the 10 to display function.
    pthread_create(&t1,NULL,display,(void*)20);//To create the thread pass the 20 to display function.
    pthread_join(t1,NULL);//To join the thread to main thread and also terminating the user defined thread.
    pthread_join(t2,NULL);//To join the thread to main thread and also terminating the user defined thread.
    return 0;
}
