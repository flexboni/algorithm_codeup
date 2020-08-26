#include <stdio.h>

int main()
{
    char b, a = 'a';
    scanf("%c", &b);

    while (a < b + 1)
    {
        printf("%c ", a++);
    }
    return 0;
}