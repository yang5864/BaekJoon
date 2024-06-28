#include <stdio.h>
int main(void)
{
    int T, A, B;
    scanf("%d", &T);
    int K[T], a[T], b[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        K[i] = (A + B);
        a[i] = A;
        b[i] = B;
    }
    for (int i = 0; i < T; i++)
    {
        printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], K[i]);
    }
    return 0;
}
