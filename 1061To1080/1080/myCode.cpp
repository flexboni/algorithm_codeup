#include <stdio.h>

int main()
{
    int a, b, sum = 0, i = 1;
    scanf("%d", &a);

    do
    {
        b = i;
        sum += i;
        i++;
    } while (sum < a);
    printf("%d", b);
    return 0;
}