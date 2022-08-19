#include<stdio.h>
#include<malloc.h>
void create();
void display();
void insertatbeginningCCLL();
void insertatendCCLL();
void insertspecafterCLL(int);
void insertspecbeforeCLL(int);
int length();
struct node{
    int a;
    struct node *link;
};
struct node *head=NULL,*temp=NULL,*temp1=NULL;
int main(){
    printf("Circular Linked List Insertion\n");
    create();
    insertatbeginningCCLL();
    insertatendCCLL();
    int len = length();
    insertspecafterCLL(len);
    len=length();
    insertspecbeforeCLL(len);
    display();
    return 0;
}
void create(){
    struct node *newnode=NULL;//To create node;
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
            temp->link=head;
            printf("You want to create another node(Yes press 1 No press 0): ");
            scanf("%d",&ch);
        }
    }
    temp1=head;
}
void insertatbeginningCCLL()
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Insert at beginning\n");
    printf("Enter a value : ");
    scanf("%d",&newnode->a);
    if(head!=NULL)
    {
        temp->link=newnode;
        newnode->link=head;
        head=newnode;
    }
    else
    {
        head=temp=newnode;
        newnode->link=head;
    }
    temp1=head;
}
void insertatendCCLL()
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Insert at end\n");
    printf("Enter a value : ");
    scanf("%d",&newnode->a);
    if(head!=NULL)
    {
        temp->link=newnode;
        newnode->link=head;
        temp=newnode;
    }
    else
    {
        head=temp=newnode;
        newnode->link=head;
    }
    temp1=head;
}
void insertspecafterCLL(int len){
        int pos=0;
        printf("Enter the position to add new node(after) : ");
        scanf("%d",&pos);//To read the position from user.
        if(pos<=len && pos!=0 && len!=0){//This condition check user enter valid position or not
            struct node* newnode = (struct node*)malloc(sizeof(struct node*));//To create the node
            printf("Enter the a value : ");
            scanf("%d",&newnode->a);//Read 'a' value
            if(pos==len){//Suppose user enter the last position the below process will be proceed.
                temp->link=newnode;
                newnode->link=head;
                temp=newnode;
            }
            else{//Suppose user enter intermediate position the below else part process will be proceed.
                while(pos>1){
                    temp1=temp1->link;
                    pos--;
                }
                newnode->link=temp1->link;
                temp1->link=newnode;
            }
            temp1=head;//Atlast assign temp1 = head
        }
        else{//User suppose enter invalid position it will print some message to user.
            printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
        }

}
void insertspecbeforeCLL(int len){
        int pos;
        printf("Enter the position to add new node(before) : ");
        scanf("%d",&pos);//To read position from user
        if(pos<=len && pos!=0 && len!=0){//This condition check user enter valid position or not
            struct node* newnode = (struct node*)malloc(sizeof(struct node*));//To create node
            printf("Enter the a value : ");
            scanf("%d",&newnode->a);//Read 'a' value
            if(pos==1){//Suppose user enter the 1 position the if part will be run otherwise else part will be run.
                temp->link=newnode;
                newnode->link=head;
                head=newnode;
            }
            else{
                pos--;//To decrement the position because node is inserted into before the specific position so temp1 traverse upto before the specific position
                while(pos>1){//To traverse the temp1 upto before the specific position.
                    pos--;
                    temp1=temp1->link;
                }
                //To set the links for new node.
                newnode->link=temp1->link;
                temp1->link=newnode;
            }
            temp1=head;//Atlast assign temp1 = head
        }
        else{
            printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
        }
}
void display()
{

    if(head!=NULL){//To check the list is empty or not
        while(temp1->link!=head){
            printf("%d\n",temp1->a);//Display node data values
            temp1=temp1->link;//To traverse another node using node address part
        }
        printf("%d\n",temp1->a);
        temp1=head;
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
        while(temp1->link!=head)
        {
            ct++;
            temp1=temp1->link;
        }
        temp1=head;
        return ct;
    }
    else{
        return 0;
    }
}
