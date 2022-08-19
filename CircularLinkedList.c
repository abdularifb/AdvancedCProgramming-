#include<stdio.h>
#include<malloc.h>
void create();
void display();
struct node{
    int a;
    struct node *link;
};
int main(){
    create();
    display();
    return 0;
}
struct node *head=NULL,*temp=NULL;
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
    temp = head;//Atlast assign temp = head
}
void display()
{
    if(head!=NULL){//To check the list is empty or not
        while(temp->link!=head){
            printf("%d\n",temp->a);//Display node data values
            temp=temp->link;//To traverse another node using node address part
        }
        printf("%d\n",temp->a);
        temp=head;
    }
    else{
        printf("OOPS!!! The list is empty\n");
    }
}
