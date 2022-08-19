#ifndef OTHER_H_INCLUDED
#define OTHER_H_INCLUDED

//int getnumber(void);
int reversenumber(int);
int temp;
int rev=0;
int reversenumber(n){
    temp=n;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}


#endif // OTHER_H_INCLUDED
