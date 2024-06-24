#include <stdio.h>
int main(void)
{
    long long A, B, C;
    long long result;
    scanf("%lld %lld %lld", &A, &B, &C);
    result = A + B + C;
    printf("%lld\n", result);
    return 0;
}