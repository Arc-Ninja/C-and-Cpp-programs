#include<stdio.h>
#include<conio.h>
void main(){
    int n1,n2,gcd,i;
    printf("Enter the values of n1 and n2: ");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    printf("The gcd of %d and %d is = %d",n1,n2,gcd);
    getch();
}