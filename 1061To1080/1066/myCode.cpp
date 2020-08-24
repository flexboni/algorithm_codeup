#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a % 2 != 0)
        printf("odd\n");
    else
        printf("even\n");
    if (b % 2 != 0)
        printf("odd\n");
    else
        printf("even\n");
    if (c % 2 != 0)
        printf("odd\n");
    else
        printf("even\n");
    return 0;
}