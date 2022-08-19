#include<stdio.h>
typedef int integer;
typedef struct placement{
    integer PlacementAdminNo;
    char AdminName[15];
    char AdminPassword[15];
}PLA;
int main(){
    PLA s = {1,"Arif","5550@123"};
    printf("AdminNumber :%d\nAdminName :%s\nAdminPassword :%s",s.PlacementAdminNo,s.AdminName,s.AdminPassword);
    return 0;
}
