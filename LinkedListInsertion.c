#include<stdio.h>
#include<malloc.h>
void create();
void display();
void insertatbeginning();
void insertend();
void insertspecafter(int);
void insertspecbefore(int);
int length();
struct node{
    int a;
    struct node *link;
};
struct node *head=NULL,*temp=NULL;//To declare the head pointer and temp pointer globally.
int main(){
    printf("Singly Linked List Insertion\n");
    create();//This function is used to create a node
    insertatbeginning();//This function is used to insert a node at beginning
    insertend();//This function is used to insert a node at end.
    int len=length();//This function is used to calculate the length of list
    insertspecafter(len);//This function is used to insert a node after the specific position
    len=length();
    insertspecbefore(len);//This function is used to insert a node before the specific position
    display();//This function is used to display the values of the list
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
//This function insert a node from beginning
void insertatbeginning(){
    struct node* newnodeI=(struct node*)malloc(sizeof(struct node*));//To create a new node for inserting process
    printf("Insert at beginning\n");
    printf("Enter a value : ");
    scanf("%d",&newnodeI->a);//Read the value of a inserted node
    if(head!=NULL){
        head=newnodeI;//To assign newnode address into head
        newnodeI->link = temp;//To assign the temp address into newnodeI link part;
    }
    else{
        newnodeI->link=NULL;
        head=newnodeI;
    }
     temp = head;//Atlast assign temp = head
}
void insertend(){
        struct node* newnodeIE = (struct node*)malloc(sizeof(struct node*));//To create a new node for inserting process
        printf("Insert at end\n");
        printf("Enter a value : ");
        scanf("%d",&newnodeIE->a);//Read the value of a inserted node
        if(head!=NULL){//To check the list is empty or not
            newnodeIE->link=NULL;//To set NULL value into newnode link part.
            while(temp->link !=NULL){//This loop is used to traverse the last node.
                temp = temp ->link;
            }
            temp->link=newnodeIE;//To store the address of newnodeIE into temp link part.
        }
        else{
           newnodeIE->link=NULL;
           head=newnodeIE;
        }
        temp=head;//Atlast assign temp = head
}
void insertspecafter(int len){
        int pos=0;
        printf("Enter the position to add new node(after) : ");
        scanf("%d",&pos);//To read the position from user.
        if(pos<=len && pos!=0 && len!=0){//This condition check user enter valid position or not
            int ct=pos;//To assign the position to ct.
            struct node* newnodeISa = (struct node*)malloc(sizeof(struct node*));//To create the node
            printf("Enter the a value : ");
            scanf("%d",&newnodeISa->a);//Read 'a' value
            while(ct!=1){//This while loop is used to traverse the temp pointer to specific position
                ct--;
                temp=temp->link;
            }
            if(pos==len){//Suppose user enter the last position the below process will be proceed.
                temp->link=newnodeISa;
                newnodeISa->link=NULL;
            }
            else{//Suppose user enter intermediate position the below else part process will be proceed.
                 newnodeISa->link=temp->link;
                 temp->link = newnodeISa;
            }
            temp=head;//Atlast assign temp = head
        }
        else{//User suppose enter invalid position it will print some message to user.
            printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
        }

}
void insertspecbefore(int len){
        int pos;
        printf("Enter the position to add new node(before) : ");
        scanf("%d",&pos);//To read position from user
        if(pos<=len && pos!=0 && len!=0){//This condition check user enter valid position or not
            struct node* newnodeISb = (struct node*)malloc(sizeof(struct node*));//To create node
            printf("Enter the a value : ");
            scanf("%d",&newnodeISb->a);//Read 'a' value
            if(pos==1){//Suppose user enter the 1 position the if part will be run otherwise else part will be run.
                newnodeISb->link=temp;
                head = newnodeISb;
            }
            else{
                pos--;//To decrement the position because node is inserted into before the specific position so temp traverse upto before the specific position
                while(pos>1){//To traverse the temp upto before the specific position.
                    pos--;
                    temp=temp->link;
                }
                //To set the links for new node.
                newnodeISb->link=temp->link;
                temp->link = newnodeISb;
            }
            temp=head;//Atlast assign temp = head
        }
        else{
            printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
        }
}
//To find the length of the list using traverse method
int length(){
    int ct=1;
    if(head!=NULL){//To check the list is empty or not
        while(temp->link!=NULL){
            ct++;
            temp = temp->link;
        }
        temp=head;
        return  ct;
    }
    else{
        return 0;
    }

}
