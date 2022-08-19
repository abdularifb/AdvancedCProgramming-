#include<stdio.h>
#include<malloc.h>
void create();
void display();
void reverseLL();
struct node{
    int a;
    struct node *link;
};
struct node *head=NULL,*temp=NULL;
int main(){
    printf("Reverse Linked List\n");
    create();
    reverseLL();
    display();
    return 0;
}
void create(){
    struct node *newnode=NULL;//To create new node;
    int ch=1;
    while(ch){
        newnode = (struct node*)malloc(sizeof(struct node));//To dynamically Allocate the memory to node.
        if(newnode==NULL){ //This condition check the memory allocate for newnode
            printf("Something error\n");
        }
        else{
            printf("Enter the a value : ");
            scanf("%d",&newnode->a);//To read  node data
            newnode->link=NULL;//To set the node address part will be null
            if(head==NULL){//This condition check this is first node.
                head=temp=newnode;////To set the address of newnode into head and temp pointer.
            }
            else{
                temp->link=newnode;//To assign the newnode address into temp link part
                temp=newnode;//And also assign the newnode adresss into temp pointer.
            }
            printf("You want to create another node(Yes press 1 No press 0): ");
            scanf("%d",&ch);
        }
    }
    temp = head;
}
void display(){
    if(head!=NULL){//To check the list is empty or not
        while(temp!=NULL){
            printf("%d\n",temp->a);//Display node data values
            temp=temp->link;//To traverse another node using node address part
        }
        temp=head;
    }
    else{
        printf("OOPS!!! The list is empty\n");
    }
}
//This method is used to reverse the linked list.
void reverseLL(){
    if(head!=NULL){
        struct node* prevnode,*nextnode,*currentnode;//To declare the node pointers.
        prevnode = NULL;//Assign prevnode equal to NULL.
        nextnode=currentnode=head;//nextnode and currentnode equal to head.
        //This while loop traverse upto last node
        while(nextnode!=NULL){
            //The below process reverse the link only with help of three node pointers.
            nextnode=nextnode->link;
            currentnode->link=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        //Atlast Assign temp and head equal to last node for display values of node in reverse order.
        head=temp=prevnode;
    }
    else{
        printf("OOPS!!! The list is empty\n");
    }
}
