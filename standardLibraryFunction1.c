#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char s[10]="110.5 20.5";
    char *end;
    char s1[20]="10000000000";
    printf("%d\n",atoi(s));//To convert the string to integer
    printf("%.2f\n",atof(s));//To convert the string to float
    printf("%ld\n",atol(s1));//To convert the string to long
    printf("%.2f\n",strtod(s,&end));//To convert the string to double
    printf("%.3f %.2f\n",strtof(s,&end),(strtof(end,NULL)));//To convert the string to float
    printf("%ld\n",strtol(s1,end,10));//To convert the string to long using base

    for(int i=0;i<10;i++){//generate the random numbers vary based on i value
        srand(1);
        printf("%d ",rand());
    }
    printf("\n");
    printf("value of PATH Environment variable :%s\n",getenv("PATH"));//Access the environment variable using getenv
    system("ls");//To print the all files in current working directory
    return 0;
}
