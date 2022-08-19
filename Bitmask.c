#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a b c value:");
    scanf("%d %d %d",&a,&b,&c);//Read a,b and c values
    printf("Before Setting the bit a value is :%d\n",a);
    a=a|(1<<16);//To set the 2 bit using bitwise operator
    printf("After setting the bit a value is :%d\n",a);

    //Unset or clear the bit
    printf("Before unset the bit b value is :%d\n",b);
    b = b & ~(1<<1);//To unset the 1 bit using bitwise operator
    printf("After unset the bit b value is :%d\n",b);

    //Toggle the bit
    printf("Before Toggle the bit c value is :%d\n",c);
    c = c ^ (1<<1);//To Toggle the 1 bit using bitwise operator
    printf("After Toggle the bit c value is :%d",c);

    return 0;
}
