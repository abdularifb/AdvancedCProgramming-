#include<stdio.h>
#include<malloc.h>
void create();
void display();
void deleteatbegCLL();
int length();
void deletespecCLL(int);
struct node{
    int a;
    struct node *link;
};
struct node *head=NULL,*temp=NULL,*temp1=NULL;
int main(){
    printf("Circular LinkedList Deletion\n");
    create();
    deleteatbegCLL();
    deleteendCLL();
    int len = length();
    deletespecCLL(len);
    display();
    return 0;
}
//This function is used to create the node.
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
//This function is used to delete the node at beginning.
void deleteatbegCLL(){
    if(head->link==head){
        free(temp1);
        head=NULL;
        temp=NULL;
    }
    else if(head!=NULL){
        head=temp1->link;
        temp->link=head;
        free(temp1);
    }
    else{
        printf("OOPS!!! The list is empty\n");
    }
    temp1=head;

}
//This function is used to delete the node at end.
void deleteendCLL(){
    if(head->link==head){
        free(temp1);
        head=NULL;
        temp=NULL;
    }
    else if(head!=NULL){
       struct node* prevnode;
       while(temp1->link!=head){
            prevnode=temp1;
            temp1=temp1->link;
       }
       prevnode->link=head;
       temp=prevnode;//This is last node.
       free(temp1);
    }
    else{
        printf("OOPS!!! The list is empty\n");
    }
    temp1=head;

}
//This function is used to delete the node at specified position.
void deletespecCLL(int len){
    struct node* prev;
    int pos,ct;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);//Read the position to delete.
    if(pos<=len && len!=0 && pos!=0){//To check these condition because suppose the list is empty or user enter invalid position
        if(pos==1){//user enter 1 position the below process will be proceed.
             if(head->link==head){
                free(temp1);
                head=NULL;
                temp=NULL;
            }
            else{
                head=head->link;
                temp->link=head;
                free(temp1);
            }
        }
        else if(pos==len){//user enter last position the below process will be proceed
            if(head->link==head){
                free(temp1);
                head=NULL;
                temp=NULL;
            }
            else{
                len--;
                while(len>1){
                    temp1=temp1->link;
                    len--;
                }
                free(temp1->link);
                temp1->link=head;
            }
        }
        else{//User enter intermediate position the below process will be proceed
            while(pos>1){
                prev=temp1;
                temp1 = temp1->link;
                pos--;
            }
            prev->link=temp1->link;
            free(temp1);
        }
        temp1=head;//Atlast assign temp = head
    }
    else{
        printf("OOPS!! Something Error (Listy is Empty || User Enter Invalid position )\n");
    }

}
//This function is used to display the node 'a' values.
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
