#include <stdio.h>

int main()
{
    int s, d, p, sum;

    scanf("%d %d %d", &s, &d, &p);

    sum = s;
    for (int i = 2; i <= p; i++)
    {
        sum += d;
    }
    printf("%d", sum);
    return 0;
}