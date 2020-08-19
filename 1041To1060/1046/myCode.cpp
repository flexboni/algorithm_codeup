#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld", &a, &b, &c);
    d = a + b + c;
    printf("%lld\n", d);
    printf("%.1f", (float)(d / 3.0));
    return 0;
}