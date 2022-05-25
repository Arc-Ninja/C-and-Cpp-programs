#include <stdio.h>
int main()
{
    long int num, rem, reverse = 0, num2;
    scanf("%ld", &num);
    num2 = num;
    while (num)
    {
        rem = num % 10;
        // printf("rem : %ld\n",rem);
        reverse = (reverse * 10) + rem;
        // printf("reverse : %ld\n",reverse);
        num = num / 10;
        // printf("num : %ld\n",num);
    }
    if (reverse == num2)
    {
        printf("The given number %ld is a palindrome", num2);
    }
    else
    {
        printf("The given number %ld is not a palindrome", num2);
    }
    return 0;
}