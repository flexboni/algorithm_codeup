#include <stdio.h>

int main()
{
    int h, w, x = 2, y = 2, z = 1, arr[11][11] = {};

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\n========while start===============\n");
    while (z || x < 11 || y < 11)
    {
        if (arr[x][y] == 2)
            z = 0;
        else if (arr[x + 1][y] == 1)
        {
            arr[x][y] = 9;
            x++;
        }
        else
        {
            arr[x][y] = 9;
            y++;
        }
        printf("\n\n=======================\n");
        for (int k = 1; k < 11; k++)
        {
            for (int l = 1; l < 11; l++)
            {
                printf("%d ", arr[k][l]);
            }
            printf("\n");
        }
    }

    // for (int k = 1; k < 11; k++)
    // {
    //     for (int l = 1; l < 11; l++)
    //     {
    //         printf("%d ", arr[k][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
