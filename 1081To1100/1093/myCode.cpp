#include <stdio.h>

int main()
{
    int n, call;
    int array[24] = {};

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &call);
        array[call]++;
    }

    for (int i = 1; i < 24; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}