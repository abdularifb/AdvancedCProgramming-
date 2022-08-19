#include<stdio.h>
#include<malloc.h>
struct node* create();
void display(struct node*);
struct node* insertatbeginning(struct node*);
struct node* insertend(struct node*);
struct node* insertspecafter(struct node*,int);
struct node* insertspecbefore(struct node*,int);
int length(struct node*);
//To declare the structure for node
struct node{
    int a;
    struct node *link;
};
int main(){
    printf("Singly Linked List Insertion\n");
    struct node* createnode=create();//This function is used to create a node
    struct node* Insert=insertatbeginning(createnode);//This function is used to insert a node at beginning
    struct node* End = insertend(Insert);//This function is used to insert a node at end.
    int len=length(End);//This function is used to calculate the length of list
    struct node* InsertSp = insertspecafter(End,len);//This function is used to insert a node after the specific position
    len=length(InsertSp);
    struct node* InsertSp1 = insertspecbefore(InsertSp,len);//This function is used to insert a node before the specific position
    display(InsertSp1);//This function is used to display the values of the list
}
struct node* create(){
    struct node *newnode=NULL,*head=NULL,*temp=NULL;//To create three struct node pointers;
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
    return head;
}
void display(struct node* temp){
    while(temp!=NULL){
        printf("%d\n",temp->a);//Display node data values
        temp=temp->link;//To traverse another node using node address part
    }
}
//This function insert a node from beginning
struct node* insertatbeginning(struct node* headI){
        struct node* tempI = headI;//To store the Existing collection of node head or base pointer into tempI pointer.
        struct node* newnodeI=(struct node*)malloc(sizeof(struct node*));//To create a new node for inserting process
        printf("Insert at beginning\n");
        printf("Enter a value : ");
        scanf("%d",&newnodeI->a);//Read the value of a inserted node
        headI=newnodeI;//To assign newnode address into headI
        newnodeI->link = tempI;//To assign the temp address into newnodeI link part;
        return headI;//return the collection nodes base address
}
struct node* insertend(struct node* headIE){
        struct node* tempIE = headIE;//To store the Existing collection of node head or base pointer into tempIE pointer.
        struct node* newnodeIE = (struct node*)malloc(sizeof(struct node*));//To create a new node for inserting process
        printf("Insert at end\n");
        printf("Enter a value : ");
        scanf("%d",&newnodeIE->a);//Read the value of a inserted node
        newnodeIE->link=NULL;//To set NULL value into newnode link part.
        while(tempIE->link !=NULL){//This loop is used to traverse the last node.
            tempIE = tempIE ->link;
        }
        tempIE->link=newnodeIE;//To store the address of newnodeIE into tempIE link part.
        return headIE;//return the collection nodes base address
}
struct node* insertspecafter(struct node* headISa,int len){
        int pos=0;
        printf("Enter the position to add new node(after) : ");
        scanf("%d",&pos);//To read the position from user.
        if(pos<=len){//This condition check user enter valid position or not
            int ct=pos;//To assign the position to ct.
            struct node*tempISa = headISa;//To assign the head pointer address into temp.
            struct node* newnodeISa = (struct node*)malloc(sizeof(struct node*));//To create the node
            printf("Enter the a value : ");
            scanf("%d",&newnodeISa->a);//Read 'a' value
            while(ct!=1){//This while loop is used to traverse the temp pointer to specific position
                ct--;
                tempISa=tempISa->link;
            }
            if(pos==len){//Suppose user enter the last position the below process will be proceed.
                tempISa->link=newnodeISa;
                newnodeISa->link=NULL;
            }
            else{//Suppose user enter intermediate position the below else part process will be proceed.
                 newnodeISa->link=tempISa->link;
                 tempISa->link = newnodeISa;
            }
            return headISa;//To return the head pointer
        }
        else{//User suppose enter invalid position it will print some message to user.
            printf("OOPS!!! The list length is %d \n",len);
        }

}

struct node* insertspecbefore(struct node* headISb,int len){
        int pos;
        printf("Enter the position to add new node(before) : ");
        scanf("%d",&pos);//To read position from user
        if(pos<=len){//This condition check user enter valid position or not
            struct node* newnodeISb = (struct node*)malloc(sizeof(struct node*));//To create node
            struct node*tempISb = headISb;//To assign the head pointer address into temp.
            printf("Enter the a value : ");
            scanf("%d",&newnodeISb->a);//Read 'a' value
            if(pos==1){//Suppose user enter the 1 position the if part will be run otherwise else part will be run.
                newnodeISb->link=tempISb;
                headISb = newnodeISb;
            }
            else{
                pos--;//To decrement the position because node is inserted into before the specific position so temp traverse upto before the specific position
                while(pos>1){//To traverse the temp upto before the specific position.
                    pos--;
                    tempISb=tempISb->link;
                }
                //To set the links for new node.
                newnodeISb->link=tempISb->link;
                tempISb->link = newnodeISb;
            }
            return headISb;//return the head pointer
        }
        else{//User suppose enter invalid position it will print some message to user.
            printf("OOPS!!! The list length is %d \n",len);
        }

}
//To find the length of the list using traverse method
int length(struct node* headL){
    struct node* tempL = headL;
    int ct=1;
    while(tempL->link!=NULL){
        ct++;
        tempL = tempL->link;
    }
    return  ct;
}
