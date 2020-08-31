#include <stdio.h>

int main()
{
    int n, count, array[1000] = {0}, min = 10000;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &count);
        array[i] = count;

        if (min > array[i])
            min = array[i];
    }

    printf("%d", min);
    return 0;
}