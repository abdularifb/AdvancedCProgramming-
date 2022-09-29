#include <stdio.h>

#define printf(string,args...) printf("%s : "string, "AMI",##args)

int main()
{
    printf("Hello %s","guest");

    return 0;
}
