#include<stdio.h>
#include<malloc.h>
struct node* create();
//This is the structure of the tree.
struct node{
    int data;
    struct node *left,*right;
};
struct node *root=NULL,*temp=NULL;
int main(){
    root=create();
    root=create();
    temp=root;
    return 0;
}
//This Function is used to create the binary tree.
struct node* create(){
    int x;
    printf("Enter the data (if -1 enter no node will created): ");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    struct node* newnode = (struct  node*)malloc(sizeof(struct node));
    newnode->data=x;
    printf("Left child of %d\n",x);
    newnode->left=create();
    printf("Right child of %d\n",x);
    newnode->right=create();
    return newnode;
}
