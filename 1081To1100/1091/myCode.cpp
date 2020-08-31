#include <stdio.h>

int main()
{
    int s, m, d, p;
    long long int sum;

    scanf("%d %d %d %d", &s, &m, &d, &p);

    sum = s;
    for (int i = 2; i <= p; i++)
    {
        sum *= m;
        sum += d;
    }
    printf("%lld", sum);
    return 0;
}