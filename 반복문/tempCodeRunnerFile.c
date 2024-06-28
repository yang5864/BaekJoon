#include <stdio.h>
int main(void)
{
    int A, B;
    int sum[1000];
    int k = 0;
    while (1)
    {
        int result = scanf("%d %d", &A, &B);

        if (result == EOF)
            break;

        sum[k++] = A + B;
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d\n", sum[i]);
    }

    return 0;
}
