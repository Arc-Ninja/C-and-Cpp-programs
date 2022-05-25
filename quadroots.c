#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float d;
    scanf("%d %d %d", &a, &b, &c);
    d = ((b * b) - (4 * a * c));
    printf("%.2f\n", (float)(-b + d) / 2 * a);
    printf("%.2f", (float)(-b - d) / 2 * a);
    return 1;
}