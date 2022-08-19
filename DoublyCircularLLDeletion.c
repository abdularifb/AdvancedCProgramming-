#include<stdio.h>
#include<malloc.h>
void createCDLL();
void deletebegCDLL();
void deleteendCDLL();
void display();
int length();
void deletespecCDLL(int);
struct node{
    int a;
    struct node* prev;
    struct node* next;
};
struct node*head=NULL,*temp=NULL,*temp1=NULL;
int main(){
    printf("Doubly Circular LinkedList Deletion\n");
    createCDLL();
    deletebegCDLL();
    deleteendCDLL();
    int len = length();
    deletespecCDLL(len);
    display();
    return 0;
}
//To create a new node
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
//To delete the first node
void deletebegCDLL(){
    if(head==NULL){
        printf("OOPS!!! This list is empty\n");
    }
    else if(head->next==head){
        head=NULL;
        temp=NULL;
        free(temp1);
    }
    else{
        head=temp1->next;
        temp->next=head;
        head->prev=temp;
        free(temp1);
    }
    temp1=head;
}
//To delete the first node
void deleteendCDLL(){
    if(head==NULL){
        printf("OOPS!!! This list is empty\n");
    }
    else if(head->next==head){
        free(temp1);
        head=NULL;
    }
    else{
        temp->prev->next=head;
        temp1=temp;
        temp=temp->prev;
        head->prev=temp;
        free(temp1);
    }
    temp1=head;
}
//This function is used to delete node at specific positon
void deletespecCDLL(int len){
    int pos;
    printf("Enter the position to delete : ");
    scanf("%d",&pos);
    if(pos<=len && pos>0 && len>0){
        if(pos==1){
            if(head->next==head){
                free(temp1);
                head=NULL;
                temp=NULL;
            }
            else{
               head=temp1->next;
               temp->next=head;
               head->prev=temp;
               free(temp1);
            }
        }
        else if(pos==len){
            temp->prev->next=head;
            temp1=temp;
            temp=temp->prev;
            head->prev=temp;
            free(temp1);
        }
        else{
            while(pos>1){
                pos--;
                temp1=temp1->next;
            }
            temp1->prev->next=temp1->next;
            temp1->next->prev=temp1->prev;
            free(temp1);
        }
        temp1=head;
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
