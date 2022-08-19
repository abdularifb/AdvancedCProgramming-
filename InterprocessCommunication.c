#include<stdio.h>
#include<signal.h>
void signalhandler(int sig){
    printf("Catch signal\n");
    exit(0);
}
int main(){
    fork();//The Fork system call is used to again the process run in another process id.
    int a=50,b=20;
    pid_t p = getpid();//To get the procees id
    //signal(SIGINT,signalhandler);//SIGINT is used to interrupt the process
    //while(1);
    if(a<b){
        kill(p,SIGINT);//To kill process
    }
    else{
        printf("%d + %d = %d\n",a,b,a-b);
    }
    return 0;
}
