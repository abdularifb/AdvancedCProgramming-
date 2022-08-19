#include<stdio.h>
#include<malloc.h>
void enqueue(int);
void dequeue();
void display();
void peek();
struct node{
    int a;
    struct node*next;
};
struct node *front=NULL,*rear=NULL,*temp;
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    peek();
    display();
    return 0;
}
//This function is to insert the data into queue.
void enqueue(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->a=x;
    if(rear==NULL){
        front=newnode;
        newnode->next=NULL;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
//This function is used to delete the data from queue.
void dequeue(){
    if(front==NULL && rear==NULL){
        printf("The queue is Empty\n");
    }
    else if(front==rear){
        free(rear);
        front=rear=NULL;
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
}
//This function is used to print the first element of queue.
void peek(){
    if(front==NULL && rear==NULL){
        printf("The queue is Empty\n");
    }
    else{
        printf("The peek element of queue is : %d\n",front->a);
    }
}
//This function is used to display the values of the queue.
void display(){
    if(front==NULL && rear==NULL){
        printf("The queue is Empty\n");
    }
    else{
        printf("The queue elements\n");
        temp=front;
        while(temp!=NULL){
            printf("%d\n",temp->a);
            temp=temp->next;
        }
    }
}
