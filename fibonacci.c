#include<stdio.h>
int main(){
    long long int n,a=0,b=1,c,i=2;
    printf("Enter the number of fbn's you want to generate: ");
    scanf("%lld",&n);
    printf("\n0,1");
    while(i<n){
         c = a+b;
         a=b;
         b=c;
         i++;
         printf(",%lld",c);
        }
    return 0;
}