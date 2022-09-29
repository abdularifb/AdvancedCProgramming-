//Sort two array

#include<stdio.h>

void SortTwoArray(int[], int[], int, int);
int* Sort(int[],int);

int main()
{
    int Array1[] = {5,9,7,4};
    int Array2[] = {8,1,3};

    int Array1Count = sizeof(Array1)/sizeof(Array1[0]);
    int Array2Count = sizeof(Array2)/sizeof(Array2[0]);

    SortTwoArray(Array1, Array2, Array1Count, Array2Count);

    return 0;
}

void SortTwoArray(int Array1[], int Array2[], int Array1Count, int Array2Count)
{
    int LoopEnd = 0;

    int *ptr1, *ptr2;

    if(Array1Count>Array2Count)
    {
        LoopEnd = Array1Count;
    }
    else
    {
        LoopEnd = Array2Count;
    }

    for(int i=0; i<LoopEnd; i++)
    {
        ptr1 = Sort(Array1,Array1Count);
        ptr2 = Sort(Array2,Array2Count);

        int a = *(ptr1+(Array1Count-1));
        int b = *(ptr2+0);

        if(a>b)
        {
            a = a + b;
            b = a - b;
            a = a- b;
        }
        *(ptr1+(Array1Count-1))= a;
        *ptr2 = b;
    }

    for(int i=0; i<Array1Count;i++)
    {
        printf("Array 1 : %d\n",Array1[i]);
    }

    for(int i=0; i<Array2Count;i++)
    {
        printf("Array 2 : %d\n",Array2[i]);
    }
}

int* Sort(int Array1[],int len)
{
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(Array1[i]>Array1[j])
            {
                Array1[i] = Array1[i] + Array1[j];
                Array1[j] = Array1[i] - Array1[j];
                Array1[i] = Array1[i] - Array1[j];
            }

        }

    }
    return Array1;
}
