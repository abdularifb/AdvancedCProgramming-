#include<stdio.h>
#include<assert.h>
//Assert is used to check some conditions that will be true the below code will be run.it is very useful for debugging.
//Two Asserts are there 1.RunTime Assert 2.Compile Time assert

int main(){
    int i = 10;
    static_assert(0,"I is not less than 5");
    assert(i>=10);
    printf("i is greater than 10\n");
    return 0;
}
