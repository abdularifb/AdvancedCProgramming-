//Traverse the matrix and print elements

#include<stdio.h>
#define SIZE1 4
#define SIZE2 4

void printmat(int[][SIZE2]);

int main(){

    int mat[SIZE1][SIZE2]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    printmat(mat);

    return 0;
}

//This function returns the values of array in spiral traversal order.

void printmat(int mat[][SIZE2])
{
    int *ptr = mat;

    for(int i=0; i<=SIZE1-1; i++)
    {
        printf("%d ",*ptr);

        if(i==SIZE1-1)
        {
            for(int j=1; j<=SIZE1-1; j++)
            {
                ptr=ptr+SIZE1;
                printf("%d ",*ptr);
            }

            for(int j=1; j<=SIZE1-1; j++)
            {
                    ptr=ptr-1;
                    printf("%d ",*ptr);
            }

            for(int j=1; j<=SIZE1-2; j++)
            {
                ptr=ptr-SIZE1;
                printf("%d ",*ptr);
            }

            for(int j=1; j<=SIZE1; j++)
            {
                if(j==1||j==2)
                {
                    ptr=ptr+1;
                    printf("%d ",*ptr);
                }

                else if(j==3)
                {
                    ptr=ptr+SIZE1;
                    printf("%d ",*ptr);
                }

                else
                {
                    ptr=ptr-1;
                    printf("%d ",*ptr);
                }
            }
        }

        ptr=ptr+1;
    }
}
