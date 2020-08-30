#include <stdio.h>

int main()
{
    int s, d, p;
    long long int sum;

    scanf("%d %d %d", &s, &d, &p);

    sum = s;
    for (int i = 2; i <= p; i++)
    {
        sum *= d;
    }
    printf("%lld", sum);
    return 0;
}