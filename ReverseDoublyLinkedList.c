#include<stdio.h>
#include<malloc.h>
void createDLL();
void displayLL();
void reverseDLL();
struct node {
    int a;
    struct node* prev;
    struct node* next;
};
struct node*head=NULL,*temp=NULL;
int main(){
    printf("Reverse Doubly Linked List\n");
    createDLL();
    reverseDLL();
    displayLL();
    return 0;
}
void createDLL(){
    struct node* newnode =NULL;//To create the node
    int ch = 1;
    while(ch){//This loop create many nodes till user enter 0 to ch .
        newnode = (struct node*) malloc(sizeof(struct node*));//To create the node dynamically.
        if(newnode!=NULL){//To check the memory is allocated for node
            printf("Enter a value : ");
            scanf("%d",&newnode->a);//Read 'a' value
            if(head==NULL){//The head value is null the below procees will be proceed
                newnode->prev=NULL;
                newnode->next=NULL;
                head=newnode;
                temp=head;
            }
            else{//Head value not equal to null the below process will be proceed.
                newnode->prev=temp;
                temp->next = newnode;
                newnode->next=NULL;
                temp=temp->next;
            }
            printf("You want to create another node please enter 1 otherwise enter 0 :");
            scanf("%d",&ch);//To read the ch value
        }
        else{//Suppose the memory is not allocated for node that will print some message.
            printf("Memory not allocated\n");
        }
    }
    temp=head;//Atlast Assign the head value to temp.
}
//This function is used to reverse the list.
void reverseDLL(){
    if(head!=NULL){
        struct node* prevnode=NULL;
        while(temp!=NULL){
            temp->prev=temp->next;
            temp->next=prevnode;
            prevnode=temp;
            temp=temp->prev;
        }
        head=temp=prevnode;
    }
    else{
        printf("OOPS!!! The list is empty\n");
    }
}
void displayLL(){
    if(head!=NULL){//To check the list is empty or not
        while(temp!=NULL){
            printf("%d\n",temp->a);//Display node data values
            temp=temp->next;//To traverse another node using node address part
        }
        temp=head;
    }
    else{
        printf("OOPS!!! The list is empty\n");
    }
}
