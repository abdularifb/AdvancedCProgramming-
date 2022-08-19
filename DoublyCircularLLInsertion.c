#include<stdio.h>
#include<malloc.h>
void createCDLL();
void display();
void insertatbeginningDCLL();
void insertatendDCLL();
int length();
void insertspecbeforeDCLL(int);
void insertspecafterDCLL(int);
//This is a structure of a node
struct node {
    int a;
    struct node* prev;
    struct node* next;
};
struct node*head=NULL,*temp=NULL,*temp1=NULL;
int main(){
    createCDLL();
    insertatbeginningDCLL();
    insertatendDCLL();
    int len = length();
    insertspecbeforeDCLL(len);
    len=length();
    insertspecafterDCLL(len);
    display();
    return 0;
}
//To create new node.
void createCDLL(){
    struct node* newnode =NULL;//To create the node
    int ch = 1;
    while(ch){//This loop create many nodes till user enter 0 to ch .
        newnode = (struct node*) malloc(sizeof(struct node*));//To create the node dynamically.
        if(newnode!=NULL){//To check the memory is allocated for node
            printf("Enter a value : ");
            scanf("%d",&newnode->a);//Read 'a' value
            if(head==NULL){//The head value is null the below procees will be proceed
                head=newnode;
                newnode->prev=head;
                newnode->next=head;
                temp=head;
            }
            else{//Head value not equal to null the below process will be proceed.
                newnode->prev=temp;
                temp->next = newnode;
                newnode->next=head;
                temp=temp->next;
            }
            printf("You want to create another node please enter 1 otherwise enter 0 :");
            scanf("%d",&ch);//To read the ch value
        }
        else{//Suppose the memory is not allocated for node that will print some message.
            printf("Memory not allocated\n");
        }
    }
    temp1=head;//Atlast Assign the head value to temp.
}
//To insert new node at beginning
void insertatbeginningDCLL(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Insert at beginning\n");
    printf("Enter a value : ");
    scanf("%d",&newnode->a);
    if(head!=NULL){
        newnode->prev=temp;
        newnode->next=temp1;
        temp->next=newnode;
        temp1->prev=newnode;
        head=newnode;
    }
    else{
        head=temp=newnode;
        newnode->prev=head;
        newnode->next=head;

    }
    temp1=head;
}
//To insert new node at end
void insertatendDCLL(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Insert at end\n");
    printf("Enter a value : ");
    scanf("%d",&newnode->a);
    if(head!=NULL){
        newnode->prev=temp;
        newnode->next=temp1;
        temp1->prev=newnode;
        temp->next=newnode;
        temp=newnode;
    }
    else{
        head=temp=newnode;
        newnode->prev=head;
        newnode->next=head;

    }
    temp1=head;
}
//To insert new node at specified position after.
void insertspecbeforeDCLL(int len){
    int pos;
    printf("Enter the position to insert(before): ");
    scanf("%d",&pos);//To read the position
    if(pos<=length && pos>0 && len>0){//To check these condtions
        struct node* newnode = (struct node*)malloc(sizeof(struct node*));//To create the node
        printf("Enter the a value : ");
        scanf("%d",&newnode->a);//To read 'a' value
        if(pos==1){//User enter first position the if part will  be proceed
            newnode->prev=temp;
            newnode->next=temp1;
            temp->next=newnode;
            temp1->prev=newnode;
            head=newnode;

        }
        else{//otherwise the else part will be proceed
            pos--;
            while(pos>1){//This while loop traverse temp upto position
                pos--;
                temp1=temp1->next;
            }
            newnode->prev=temp1;
            newnode->next=temp1->next;
            temp1->next->prev=newnode;
            temp1->next=newnode;
        }
        temp1=head;
    }
    else{
        printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
    }
}
//To insert new node at specified position after.
void insertspecafterDCLL(int len){
    int pos;
    printf("Enter the position to insert(after): ");
    scanf("%d",&pos);//To read the position
    if(pos<=length && pos>0 && len>0){
        struct node* newnode = (struct node*)malloc(sizeof(struct node*));//To create a node using malloc
        printf("Enter the a value : ");
        scanf("%d",&newnode->a);//To read 'a' value
        if(pos==len){//User enter the last position the if part will be proceed
            newnode->prev=temp;
            newnode->next=temp1;
            temp1->prev=newnode;
            temp->next=newnode;
            temp=newnode;
        }
        else{//otherwise else part will be proceed
            while(pos>1){//This while loop traverse temp upto position
                pos--;
                temp1=temp1->next;
            }
            newnode->prev=temp1;
            newnode->next=temp1->next;
            temp1->next->prev=newnode;
            temp1->next=newnode;
        }
        temp1=head;//Atlast assign temp equal to head.
    }
    else{
        printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
    }
}
//To display the node 'a' values
void display(){
    if(head!=NULL){
        while(temp1->next!=head){
            printf("%d\n",temp1->a);
            temp1=temp1->next;
        }
        printf("%d\n",temp1->a);
    }
    else{
         printf("OOPS!!! The list is empty\n");
    }
}
//To find the length of the list using traverse method
int length()
{
    int ct=1;
    if(head!=NULL)
    {
        while(temp1->next!=head)
        {
            ct++;
            temp1=temp1->next;
        }
        temp1=head;
        return ct;
    }
    else{
        return 0;
    }
}
