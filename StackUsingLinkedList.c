#include<stdio.h>
#include<malloc.h>
void push(int);
void display();
void pop();
struct node{
    int a;
    struct node* next;
};
struct node* top=NULL ,*temp=NULL;
int main(){
    push(50);
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    peek();
    printf("The elements of stack\n");
    display();
    return 0;
}
void push(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->a=x;
    newnode->next=top;
    top=newnode;
}
void pop(){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        temp=top;
        top=top->next;
        free(temp);
        temp=NULL;
    }
}
void peek(){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        printf("%d\n",top->a);
    }
}
void display(){
    temp=top;
    while(temp!=NULL){
        printf("%d\n",temp->a);
        temp=temp->next;
    }
}
