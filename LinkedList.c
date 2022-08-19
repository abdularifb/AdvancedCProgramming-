#include<stdio.h>
#include<malloc.h>
struct node{
    int a;
    struct node *link;
};
int main(){
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
    //This is the process of display node data values.
    temp=head;//To assign the head pointer into temp because display the values from starting point
    while(temp!=NULL){
        printf("%d\n",temp->a);//Display node data values
        temp=temp->link;//To traverse another node using node address part
    }
    return 0;
}
