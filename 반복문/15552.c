#include <stdio.h>
int main(void)
{
    long long int T;
    int A, B;
    scanf("%lld", &T);
    int K[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        K[i] = (A + B);
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d\n", K[i]);
    }
    return 0;
}
