#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j < num - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        for (int j = 0; j <= i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < num - i - 1; j++)
        {
            printf("*");
        }

        for (int j = 0; j < num - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}