#include<stdio.h>
//To define the union
union st{
    //These are the members of the union
    char a[20];
    int rollno;
    int mark1,mark2,mark3,mark4,mark5;
};
int main(){
    //To create the variable of union
    union st a;
    union st *ptr=&a;//To create union Pointer variable and assign union variable a address
    //Assigning the values of union members
    gets(ptr->a);
    ptr->rollno=003;
    ptr->mark1=100;
    ptr->mark2=100;
    ptr->mark3=100;
    ptr->mark4=98;
    ptr->mark5=99;
    //The all values displayed 99 because union only stored last memeber value this is the one of the disadvantage of union
    printf("name :%s\nrollno:%d\nmark1 :%d\nmark2 :%d\nmark3 :%d\nmark4 :%d\nmark5 :%d",ptr->a,ptr->rollno,ptr->mark1,ptr->mark2,ptr->mark3,ptr->mark4,ptr->mark5);
    return 0;

}
