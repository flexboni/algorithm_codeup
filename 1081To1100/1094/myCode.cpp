#include <stdio.h>

int main()
{
    int n, array[1000] = {0};

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = n; i >= 1; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}