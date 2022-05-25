#include<stdio.h>  
  
int main()  
{  
    int num, reverse = 0, rem;  
  
    printf("Enter a integer number\n");  
    scanf("%d", &num);  
  
    while(num)  
    {  
        rem = num % 10; 
        // printf("rem : %d\n",rem); 
        reverse = (reverse * 10) + rem;
        // printf("reverse : %d\n",reverse);  
        num     = num / 10; 
        // printf("num : %d\n",num); 
    }  
  
    printf("Reversed number is %d\n", reverse);  
  
    return 0;  
} 