#include<stdio.h>
#include<malloc.h>

void create();
void display();
void corrupt();
void Detect();

struct node
{
    int data;
    struct node *next;
};

struct node *newnode = NULL, *head=NULL, *temp=NULL ,*temp1=NULL ,*ptr=NULL,*pre=NULL;
int count=0;

int main()
{
    create();

    corrupt();

    Detect();

    //display();

    return 0;
}

void create()
{

    int choice = 1;

    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        if(newnode != NULL)
        {
            printf("Enter the data : ");
            scanf("%d",&newnode->data);

            newnode->next=NULL;

            if(head == NULL)
            {
                head = temp = newnode;
            }

            else
            {
                //pre = temp;//This is used for corroupt the middle nodes.

                temp->next = newnode;

                temp=newnode;
            }

            count++;

            printf("You want to create another node(Yes press 1 No press 0): ");
            scanf("%d",&choice);

        }

        else
        {
            printf("Something error\n");
        }

    }


}

void corrupt()
{

    head->next->next->next = head->next;

    temp = temp1 = head;
}

void Detect()
{
    ptr = temp1;

    int ct = 0;

    while(count!=0)
    {
        while((count-ct)!=0)
        {
            pre = temp;

            temp = temp -> next;

            if(ptr == temp)
            {
                printf("Address = %d Data = %d\nAddress = %d Data = %d\n",ptr,ptr->data,pre,pre->data);
                goto end;

            }

            ct++;
        }
        count--;
        temp1 = temp1->next;
        ptr=temp1;
        temp = temp1->next;
        ct=1;
    }
    end:
}

void display()
{
    temp = head;

    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
