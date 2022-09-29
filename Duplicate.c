#include<stdio.h>

int* Duplicate(int*,int);
int* ArraySort(int[],int);

int c = 0;

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

    int* ptr = Duplicate(ArraySort(arr,size),size);

    for(int i=0; i<c; i++)
    {
        printf("%d\n",*(ptr+i));
    }

    return 0;
}

int* Duplicate(int* arr,int len)
{
    static int DuplicateArray[10];

    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            int ct =1;

            if(arr[i]==arr[j])
            {
                int DuplicateArrayLength = sizeof(DuplicateArray)/sizeof(DuplicateArray[0]);

                for(int l=0; l<DuplicateArrayLength;l++)
                {
                    if(arr[i]==DuplicateArray[l])
                    {
                        ct = 0;
                    }
                }
                if(ct)
                {
                    DuplicateArray[c]=arr[i];
                    c++;
                    break;
                }

            }
        }
    }

    return DuplicateArray;
}

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
