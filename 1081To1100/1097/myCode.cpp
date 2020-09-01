#include <stdio.h>

int main()
{
    int n, x, y, arr[20][20] = {0, 0};

    for (int i = 1; i < 20; i++)
    {
        for (int j = 1; j < 20; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 좌표 개수 입력 받기
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        for (int j = 1; j < 20; j++)
        {
            arr[x][j] == 0 ? arr[x][j] = 1 : arr[x][j] = 0;
        }
        for (int k = 1; k < 20; k++)
        {
            arr[k][y] == 0 ? arr[k][y] = 1 : arr[k][y] = 0;
        }
    }

    for (int i = 1; i < 20; i++)
    {
        for (int j = 1; j < 20; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}