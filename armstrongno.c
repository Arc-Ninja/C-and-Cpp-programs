#include<stdio.h>
int main(){
    int n,n1,n2,n3,n4,result;
    scanf("%d",&n);
    n4 = n/10;
    n1 = n%10;
    n2 = n4%10;
    n3 = n4/10;
    result = n1*n1*n1 + n2*n2*n2 + n3*n3*n3;
    printf("Sum = %d\n",result);
    if (result == n){
        printf("%d is an Armstrong number",n);
    }
    else{
        printf("%d is not an Armstrong number",n);
    }
    return 0;
    
}