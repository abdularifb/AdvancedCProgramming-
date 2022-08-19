#include<stdio.h>
#define N 5
void push(int);
void pop();
void peek();
void display();
int stack[N];
int top=-1;
int main(){
    //Calling the functions
    push(50);
    push(10);
    push(15);
    push(20);
    push(40);
    peek();
    pop();
    display();
    return 0;
}
//This function is used to push the data into the stack
void push(int x){
    if(top==N-1){
        printf("Stack is full\n");
    }
    else{
        top++;
        stack[top]=x;
    }
}
//This function is used to delete the data from the stack
void pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        top--;
    }
}
//This function is used to print the first or topmost element of the stack.
void peek(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("%d\n",stack[top]);
    }
}
//This function is used to display the stack data.
void display(){
    printf("The elements of stack\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
