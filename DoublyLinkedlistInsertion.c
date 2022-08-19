#include<stdio.h>
#include<malloc.h>
void createDLL();
void displayLL();
void insertbegDLL();
void insertendDLL();
void insertspecafterDDL(int);
int length();
void insertspecbeforeDLL(int);
struct node {
    int a;
    struct node* prev;
    struct node* next;
};
struct node*head=NULL,*temp=NULL;
int main(){
    printf("Doubly Linked List Insertion\n");
    createDLL();//This function is used to create the list
    insertbegDLL();//This function is used to insert the node at beginning
    insertendDLL();//This function is used to insert the node at end
    int len = length();
    insertspecbeforeDLL(len);
    len=length();
    insertspecafterDDL(len);
    displayLL();//This function is used to display the node values.
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
//This function display all node 'a' values.
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
void insertbegDLL(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));//To create the node
    printf("Insert beginning\n");
    printf("Enter a value : ");
    scanf("%d",&newnode->a);//To read 'a' value
    if(head!=NULL){
        newnode->next = temp;
        newnode->prev =NULL;
        temp->prev=newnode;
        head=newnode;
    }
    else{
        newnode->prev=NULL;
        newnode->next=NULL;
        head=newnode;
    }
    temp=head;
}
void insertendDLL(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Insert at end\n");
    printf("Enter a value : ");
    scanf("%d",&newnode->a);//To read 'a' value
    if(head!=NULL){//To check the list is empty or not.
        while(temp->next!=NULL){//This while loop traverse upto last node because insert the new node at end.
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
    else{
        newnode->prev=NULL;
        newnode->next=NULL;
        head=newnode;
    }
    temp=head;//Atlast Assign the head value to temp.
}
void insertspecbeforeDLL(int len){
    int pos;
    printf("Enter the position to insert(before): ");
    scanf("%d",&pos);//To read the position
    if(pos<=length && pos>0 && len>0){//To check these condtions
        struct node* newnode = (struct node*)malloc(sizeof(struct node*));//To create the node
        printf("Enter the a value : ");
        scanf("%d",&newnode->a);//To read 'a' value
        if(pos==1){//User enter first position the if part will  be proceed
            newnode->prev=NULL;
            newnode->next=temp;
            temp->prev=newnode;
            head=temp=newnode;

        }
        else{//otherwise the else part will be proceed
            pos--;
            while(pos>1){//This while loop traverse temp upto position
                pos--;
                temp=temp->next;
            }
            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next->prev=newnode;
            temp->next=newnode;
            temp=head;
        }
    }
    else{
        printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
    }
}
void insertspecafterDDL(int len){
    int pos;
    printf("Enter the position to insert(after): ");
    scanf("%d",&pos);//To read the position
    if(pos<=length && pos>0 && len>0){
        struct node* newnode = (struct node*)malloc(sizeof(struct node*));//To create a node using malloc
        printf("Enter the a value : ");
        scanf("%d",&newnode->a);//To read 'a' value
        if(pos==len){//User enter the last position the if part will be proceed
            while(pos>1){//This while loop traverse temp upto position
                pos--;
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=NULL;
        }
        else{//otherwise else part will be proceed
            while(pos>1){//This while loop traverse temp upto position
                pos--;
                temp=temp->next;
            }
            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next->prev=newnode;
            temp->next=newnode;
        }
        temp=head;//Atlast assign temp equal to head.
    }
    else{
        printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
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
