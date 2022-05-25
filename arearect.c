#include <stdio.h>
int main()
{
    int a = 0;
    while (a == 0)
    {
        float length, breadth, area;
        printf("Type the length and breadth of the rectangle: ");
        scanf("%f%f", &length, &breadth);
        area = length * breadth;
        printf("The area of the rectangle is: %f\n", area);
    }
    return 0;
}