#include<stdio.h>
struct student{
    unsigned int rollno : 6;//you can store upto 0 to 63
    unsigned int mark : 7;//you can store upto 127
    unsigned int attendance:1;//you can store 0 and 1
};
int main(){
    struct student s = {63,90,0};//create the variable of the structure and store the values

    //Display the values of the Structure
    printf("RollNo :%d\n",s.rollno);
    printf("Mark :%d\n",s.mark);
    printf("Attendance:%s",s.attendance==0 ? "Not Present" : "Present");
    return 0;
}
