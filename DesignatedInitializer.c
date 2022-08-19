#include<stdio.h>
struct std{
    int sno;
    float marks;
};
int main(){
    struct std s = {.marks=100,.sno=2};
    int arr[10]={[0]=10,[3 ... 5]=20,[7]=30,40,[9]=50};
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    printf("Serial No :%d\nMarks     :%.2f",s.sno,s.marks);
    return 0;
}
