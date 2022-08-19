#include<stdio.h>
#define N 5
void enqueue(int);
void dequeue();
void display();
void peek();
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    //peek();
    display();
    return 0;
}
int front=-1,rear=-1;
int arr[N];
//This function is to insert the data into queue.
void enqueue(int x){
    if(rear!=N-1){
        if(rear==-1){
            front++;
        }
        rear++;
        arr[rear]=x;
    }
    else{
        printf("The queue is full\n");
    }

}
//This function is used to delete the data from queue.
void dequeue(){
    if(front==-1 && rear==-1){
        printf("The queue is empty\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}
//This function is used to print the first element of queue.
void peek(){
    if(front==-1 && rear==-1){
        printf("The queue is empty\n");
    }
    else{
        printf("The peek of the queue is : %d\n",arr[front]);
    }
}
//This function is used to display the values of the queue.
void display(){
    if(front==-1 && rear==-1){
        printf("The queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d\n",arr[i]);
        }
    }
}
