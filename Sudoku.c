#include<stdio.h>
#define SUM(n) (n*(n+1))/2
#define ROW 9
#define COLOUMN 9

void ColoumnCheckFunc(int[][COLOUMN],int);

void RowCheckFunc(int[][COLOUMN],int);

void SubMatCheckFunc(int[][COLOUMN],int,int,int,int,int);

int main()
{
    int SudokuArr[ROW][COLOUMN]= {{2,5,6,8,3,7,1,4,9},{7,1,9,4,2,5,8,3,6},{8,4,3,6,1,9,2,5,7},{4,6,7,1,5,8,9,2,3},{3,9,2,7,6,4,5,1,8},{5,8,1,3,9,2,6,7,4},{1,7,8,2,4,6,3,9,5},{6,3,5,9,7,1,4,8,2},{9,2,4,5,8,3,7,6,1}};

    int TotalValue = SUM(9);

    int LoopCount = 0;

    int istart = 0;

    int jstart = 0;

    int iend = 3;

    int jend = 3;

    RowCheckFunc(SudokuArr,TotalValue);

    ColoumnCheckFunc(SudokuArr,TotalValue);

    while(LoopCount<3)
    {

        if(jend>9)
        {
            LoopCount++;
            istart = istart + 3;
            iend = iend + 3;
            jstart = 0;
            jend = 3;

        }
        else
        {
            SubMatCheckFunc(SudokuArr,istart,jstart,iend,jend,TotalValue);

            jstart = jstart + 3;

            jend = jend + 3;

        }


    }



    return 0;
}

void RowCheckFunc(int SudokuArr[][COLOUMN],int TotalValue)
{
     //Row Check

    int RowCheck = 0;

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            RowCheck = RowCheck + SudokuArr[i][j];
        }

        if(RowCheck!=TotalValue)
        {
            printf("In Row Not Valid\n");
        }

        RowCheck=0;
    }
}

void ColoumnCheckFunc(int SudokuArr[][COLOUMN],int TotalValue)
{
    int ColoumnCheck = 0;

    for(int i=0; i<9; i++)
    {
        for(int  j=0; j<9; j++)
        {
            ColoumnCheck = ColoumnCheck + SudokuArr[j][i];
        }

        if(ColoumnCheck!=TotalValue)
        {
            printf("In Coloumn Not Valid\n");
        }

        ColoumnCheck = 0;
    }
}

void SubMatCheckFunc(int SudokuArr[][COLOUMN],int istart,int jstart,int iend,int jend,int TotalValue)
{
    int SubMatCheck = 0;

    for(int i=istart; i<iend; i++)
    {
        for(int j=jstart; j<jend; j++)
        {
            SubMatCheck = SubMatCheck + SudokuArr[i][j];
        }
    }

    if(SubMatCheck!=TotalValue)
    {
        printf("Sub Matrix Not Valid\n");
    }
}
