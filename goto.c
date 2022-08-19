#include<stdio.h>
int main(){
    int a,b;
    int s;
    //printf("Enter a,b values:");
    //scanf("%d %d",&a,&b);//read a and b values
    //printf("Enter the operation(add,sub,mul,div):");
    //scanf("%d",&s);//read the operation to perform
    //printf("%s",s);
    int c=8,d;
    d=(c++,++c,c>>2);
    printf("%d %d",c,d);
    if(s==1){
        goto a;//if condition will be true to perform addition operation
    }
    else if(s==2){
        goto b;//if condition will be true to perform subtraction operation
    }
    else if(s==3){
        goto c;//if condition will be true to perform multiplication operatio
    }
    else{
        goto d;//if condition will be true to perform division operation
    }

    a:
         printf("%d + %d = %d\n",a,b,a+b);

    b:
         printf("%d - %d = %d\n",a,b,a-b);

    c:
         printf("%d * %d = %d\n",a,b,a*b);

    d:
         printf("%d / %d = %d\n",a,b,a/b);

    return 0;
}

/*
int main(){
    int a=0;
    n:
        a++;//increase a value one by one
        if(a<=10){ //check a<=10
            prime(a); // pass a value to prime function
            goto n;//jump to n label
        }
    return 0;
}
//Find the the number prime or not
void prime(int n){
    int i,ct=1;
    for(i=2;i<=n;i++){
        if(n%i==0){
            ct++;
        }
    }
    if(ct==2){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d not a prime number\n",n);
    }
}
*/
