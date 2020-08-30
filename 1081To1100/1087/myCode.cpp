#include <stdio.h>

int main()
{
    int limit, sum = 0;

    scanf("%d", &limit);

    for (int i = 1; sum < limit; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}