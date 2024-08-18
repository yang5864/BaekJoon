#include <stdio.h>
int main(void)
{
    int A[9][9];
    int num = 0;
    int a, b;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &A[i][j]);
            if (A[i][j] >= num)
            {
                num = A[i][j];
                a = i + 1, b = j + 1;
            }
        }
    }

    printf("%d\n", num);
    printf("%d %d\n", a, b);

    return 0;
}