#include<stdio.h>
int main(){
    int a=0;
    while (a==0){
    int n1,n2,n3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if (n1>n2 && n1>n3){
        printf("%d is the greatest",n1);
        }
    else if (n2>n3 && n2>n1){
        printf("%d is the greatest",n2);
        }
    else if (n3>n2 && n3>n1){
        printf("%d is greatest\n",n3);
        }
    else{
        printf("all three are equal");
        }
    }    
    return 0;
}