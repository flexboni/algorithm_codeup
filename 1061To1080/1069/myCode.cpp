#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    // if (a == 'A')
    //     printf("best!!!");
    // else if (a == 'B')
    //     printf("good!!");
    // else if (a == 'C')
    //     printf("run!");
    // else if (a == 'D')
    //     printf("slowly~");
    // else
    //     printf("what?");

    switch (a)
    {
        case 'A': printf("best!!!"); break;
        case 'B': printf("good!!"); break;
        case 'C': printf("run!"); break;
        case 'D': printf("slowly~"); break;
        default:  printf("what?"); break;
    }
    return 0;
}