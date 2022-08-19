#include<stdio.h>
#include<malloc.h>
void create();
void display();
int length();
void deletebeg();
void deleteend(int);
void deletespec(int);
struct node{
    int a;
    struct node *link;
};
struct node *head=NULL,*temp=NULL;
int main(){
    printf("Singly Linked List Deletion\n");
    create();//This function is used to create the list
    deletebeg();//This function is used to delete first node
    int len = length();//This function is used to calculate the length of the list
    deleteend(len);////This function is used to delete last node
    len=length();
    deletespec(len);//This function used to delete the specific node.
    display();//This function used to display list.
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
            printf("You want to create another node(Yes press 1 No press 0): ");
            scanf("%d",&ch);
        }
    }
    temp = head;//Atlast assign temp = head
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
void deletebeg(){
    if (head== NULL){//To check the list is empty or not
        printf("The list is empty\n");
    }
    else{ //if list is not empty the below process will be proceed.
        head = head->link;//To assign the head link part into head
        free(temp);//free the temp node
    }
    temp=head;//Atlast assign temp = head
}
void deleteend(int len){
    if(head==NULL){//First check The list is empty or not
        printf("The list is empty\n");
    }
    else if(head->link==NULL){
            free(temp);
            head=NULL;
    }
    else{//if list is not empty the below process will be proceed
        len--;
        while(len>1){
            temp=temp->link;
            len--;
        }
        free(temp->link);
        temp->link=NULL;
    }
    temp=head;//Atlast assign temp = head
}
void deletespec(int len){
    struct node* prev;
    int pos,ct;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);//Read the position to delete.
    if(pos<=len && len!=0 && pos!=0){//To check these condition because suppose the list is empty or user enter invalid position
        if(pos==1){//user enter 1 position the below process will be proceed.
        head=head->link;
        free(temp);
        }
        else if(pos==len){//user enter last position the below process will be proceed
            len--;
            while(len>1){
                temp=temp->link;
                len--;
            }
            free(temp->link);
            temp->link=NULL;
        }
        else{//User enter intermediate position the below process will be proceed
            while(pos>1){
                prev=temp;
                temp = temp->link;
                pos--;
            }
            prev->link=temp->link;
            free(temp);
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
    if(head!=NULL){
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
