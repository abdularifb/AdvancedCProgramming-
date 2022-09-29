//This program To find the specific Element using binary search

#include<stdio.h>

int BinarySearchFunc(int*, int, int,int);
int* ArraySort(int [],int);

int main()
{
    int size;
    printf("Enter the array Size : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the Array : ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof(arr[0]);

    int * ptr = ArraySort(arr,len);

    int left = 0;
    int right = len - 1;

    int data;
    printf("Enter the data to find : ");
    scanf("%d",&data);

    int position = BinarySearchFunc(ptr,left,right,data);

    if(position == 0)
    {
        printf("The element not in the list\n");
    }
    else
    {
        printf("The position of find data element is :%d",position);
    }

    return 0;
}

//This Function using to sort the array

int* ArraySort(int arr[],int len)
{

    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

//This function return the specific position of the data.

int BinarySearchFunc(int *ptr, int left, int right,int data)
{
    while(left<right)
    {
        int mid = ((left+right)/2);

        if(data == (*(ptr + mid)))
        {
            return mid;
        }
        else if(data > (*(ptr + mid)))
        {
            left=left+1;
        }
        else
        {
            right = right - 1;
        }
    }

    return 0;
}
