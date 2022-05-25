#include<stdio.h>
int main(){
    int num,result,num1;
    scanf("%d",&num);
    result=1;
    num1 = num;
    while(num>0){
        result = result*num;
        num--;
        
    }
    printf("The Factorial of %d is = %d",num1,result);
    return 0;
}