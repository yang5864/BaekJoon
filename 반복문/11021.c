#include <stdio.h>
int main(void)
{
    int T, A, B;
    scanf("%d", &T);
    int K[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        K[i] = (A + B);
    }
    for (int i = 0; i < T; i++)
    {
        printf("Case #%d: %d\n", i + 1, K[i]);
    }
    return 0;
}
