#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s1[]="Hi i am arif";
    char s2[]="Welocome";
    char s3[]="new";
    char s4[]="Abdul Arif";
    char *s5;
    printf("Before memcopy s2 is:%s\n",s2);
    memcpy(s2,s1,sizeof(s1));//To copy the memory of one string to to another.
    printf("After memcopy s2 is:%s\n",s2);
    printf("before memmove s3 is:%s\n",s3);
    memmove(s3,s2,sizeof(s2));//To copy the memory of one string to another.it presents some overlaps
    printf("After memmove s3 is:%s\n",s3);
    s5 = strdup(s4);//Duplicate The string using strdup
    printf("Duplicate string:%s\n",s5);
    s5= strndup(s4,5);//Duplicate the string using strndup
    printf("Duplicate string:%s",s5);
    return 0;
}
