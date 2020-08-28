#include <stdio.h>

int main()
{
    int a, b;
    scanf("%X", &a);

    for (int i = 0x1; i <= 0xF; i++)
    {
        printf("%X*%X=%X\n", a, i, a * i);
    }
    return 0;
}