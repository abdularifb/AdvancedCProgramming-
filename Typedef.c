#define counter int
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}stu;
void main(){
    counter b = 10;
    printf("%d\n",b);
    typedef int integer;
    integer a = 1;
    printf("%d\n",a);
    stu s = {2,"Arif",100.0};
    printf("%d %s %f",s.rollno,s.name,s.marks);
}
