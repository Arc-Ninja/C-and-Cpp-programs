#include<stdio.h>
int main(){
    int n1,n2,n3;
    int a;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if (n1>n2){
        a=n1;
        }
    else{
        a=n2;
        }
    if (a>n3){
        printf("The Greatest Number is = %d\n",a);
        }
    else{
        printf("The Greatest Number is = %d",n3);
        }
    return 0;
}