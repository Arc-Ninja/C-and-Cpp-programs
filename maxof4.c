#include <stdio.h>
int max(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    if (b > a && b > c && b > d)
    {
        return b;
    }
    if (c > a && c > b && c > d)
    {
        return c;
    }
    if (d > a && d > b && d > c)
    {
        return d;
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);

    return 0;
}
