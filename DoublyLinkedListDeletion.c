#include<stdio.h>
#include<malloc.h>
void createDLL();
void deletebegDLL();
void deletendDLL();
void display();
int length();
void deletespec(int);
struct node{
    int a;
    struct node* prev;
    struct node* next;
};
struct node *head=NULL , *temp=NULL;
int main(){
    printf("Doubly Linked List Deletion\n");
    createDLL();
    deletebegDLL();
    deletendDLL();
    int len=length();
    deletespec(len);
    display();
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
//This function is used to delete the beginning node
void deletebegDLL(){
    if(head==NULL){
        printf("OOPS!!! The list is empty\n");
    }
    else if(head->next==NULL){
        free(temp);
        head=NULL;
    }
    else{
        temp->next->prev=NULL;
        head=temp->next;
        free(temp);
        temp=head;
    }
}
//This Function is used to delete the last node
void deletendDLL(){
    if(head==NULL){
        printf("OOPS!!! The list is empty\n");
    }
    else if(head->next==NULL){
        free(temp);
        head=NULL;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
        temp=head;
    }
}
//This function is used to delete node at specific positon
void deletespec(int len){
    int pos;
    printf("Enter the position to delete : ");
    scanf("%d",&pos);
    if(pos<=len && pos>0 && len>0){
        if(pos==1){
            if(head->next==NULL){
                free(temp);
                head=NULL;
            }
            else{
                temp->next->prev=NULL;
                head=temp->next;
                free(temp);
            }
        }
        else if(pos==len){
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->prev->next=NULL;
            free(temp);
        }
        else{
            while(pos>1){
                pos--;
                temp=temp->next;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
        }
        temp=head;
    }
    else{
        printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
    }
}
//This function is used to display the node 'a' values.
void display(){
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
//To find the length of the list using traverse method
int length(){
    int ct=1;
    if(head!=NULL){//To check the list is empty or not
        while(temp->next!=NULL){
            ct++;
            temp = temp->next;
        }
        temp=head;
        return  ct;
    }
    else{
        return 0;
    }
}
