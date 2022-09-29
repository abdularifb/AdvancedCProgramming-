#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{

    int a   = atoi(argv[1]);  //To convert the string to int using atoi function
    float b = atof(argv[2]);  //To convert the string to int using atof function

    printf("%d\n%f\n%s\n",a,b,argv[3]);

}
