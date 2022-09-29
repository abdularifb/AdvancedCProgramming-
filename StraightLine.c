//This program Find the Three points are lying straight line or not.

#include<stdio.h>

int Spoint(int,int,int,int,int,int);

int main()
{
    int x1,x2,x3,y1,y2,y3;

    printf("Enter the 6 points : ");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

    if(Spoint(x1,y1,x2,y2,x3,y3))
    {
        printf("Straight Line\n");
    }

    else
    {
        printf("Not Straight Line\n");
    }

    return 0;
}

int Spoint(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int m = (y2 - y1)/(x2-x1);
    int n = (y3-y2)/(x3-x2);

    if(m==n)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
