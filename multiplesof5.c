#include<stdio.h>
int main(){
    int a=5;
    int n=1;
    printf("The multiple of 5 \n");
    while (n<=99999999)
    {
        printf("%dx%d=%d\n" ,a,n,a*n);
        n++;
    }
    return 0;
    }