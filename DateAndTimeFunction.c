#include<stdio.h>
#include<time.h>
#include<unistd.h>
void clockfunc();
void timefunc();
void dtime();
void ctimefunc();
void gmtimefunc();
void localtimefunc();
int main(){
    clockfunc();
    timefunc();
    dtime();
    ctimefunc();
    gmtimefunc();
    localtimefunc();
    return 0;
}
void clockfunc(){
    //clock_t clock(void)
    //To calculate the processor Time using time function.
    clock_t start,end;//To declare two clock_t type of variables
    double total;
    start = clock();//To calculate processor time and stored into start.
    printf("starting = %d\n",start);
    for(int i=0;i<=1000000000;i++){
        if(i==1000000000){
            printf("HI\n");
        }
    }
    end=clock();//after the for loop process the processor time will be changed so that will be stored into end.
    printf("Ending = %d\n",end);
    total = (double)end - start;//Finally calculate the for loop process and stored into total
    printf("Total=%f\n",total);
}
void timefunc(){
    //time_t time(parameter in seconds)
    //This function returns the no of seconds since jan 1,1970 midnight
    time_t s = time(NULL);
    printf("Seconds is :%ld\n",s);

}
void dtime(){
    //double difftime(time_t tm1,time_t tm2);
    time_t s = time(NULL);
    printf("First Time = %ld\n",s);
    sleep(2);//To sleep two seconds
    time_t s1 = time(NULL);
    printf("Second Time = %ld\n",s1);
    double diff = difftime(s1,s);//calculate the difference between two times using difftime function.
    printf("Difference between two time is:%f\n",diff);
}
void ctimefunc(){
    //char *ctime(address of time function variable);
    time_t s1 = time(NULL);
    char *str = ctime(&s1);//To print today date and time in string format using ctime function.
    printf("%s\n",str);
}
void gmtimefunc(){
    //struct tm *gmtime(address of time function variable);
    time_t t1 = time(NULL);
    struct tm *gm = gmtime(&t1);//This also used to print separate property like seconds,minutes etc.
    printf("sec : %d\n",gm->tm_sec);
    printf("minutes : %d\n",gm->tm_min);
    printf("Hour : %d\n",gm->tm_hour);
    printf("mday : %d\n",gm->tm_mday);
    printf("month : %d\n",gm->tm_mon);
    printf("year : %d\n",gm->tm_year);
    printf("wday : %d\n",gm->tm_wday);
    printf("yday: %d\n",gm->tm_yday);
    printf("isdst : %d\n",gm->tm_isdst);
    printf("\n");
}
void localtimefunc(){
    //Localtime function is also same as gmtime but only difference is localtime display date and time based on user timezone
    time_t t1 = time(NULL);
    struct tm *lt = localtime(&t1);//This also used to print separate property like seconds,minutes etc.
    printf("sec : %d\n",lt->tm_sec);
    printf("minutes : %d\n",lt->tm_min);
    printf("Hour : %d\n",lt->tm_hour);
    printf("mday : %d\n",lt->tm_mday);
    printf("month : %d\n",lt->tm_mon);
    printf("year : %d\n",lt->tm_year);
    printf("wday : %d\n",lt->tm_wday);
    printf("yday: %d\n",lt->tm_yday);
    printf("isdst : %d\n",lt->tm_isdst);

    //The asctime function is return date and time based on the localtime structure variable.
    //char *asctime(Structure pointer of localtime)
    char*s = asctime(lt);
    printf("The date and time format using asctime = %s",s);
}
