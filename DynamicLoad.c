#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>
void errorcheck(){
    char *error = NULL;
    if((error=dlerror())!=NULL){
        fputs(error,stderr);
        exit(1);
    }
}
int main(){
    void *handle = NULL;
    void (*freq)(char[])=NULL;
    void (*removechar)(char[])=NULL;
    void (*length)(char[])=NULL;
    char s[] ="abdul arif";

    handle = dlopen("../Mylib/lib_mylib.dll",RTLD_LAZY);
    if(!handle){
        printf("HI\n");
        fputs(dlerror(),stderr);
    }
    dlerror();
    freq = dlsym(handle,"main");
    errorcheck();
    (*freq)(s);
    removechar= dlsym(handle,"main");
    errorcheck();
    (*removechar)(s);
    length= dlsym(handle,"main");
    errorcheck();
    (*length)(s);
    dlclose(handle);
    return 0;
}
