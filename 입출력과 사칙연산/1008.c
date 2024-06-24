#include <stdio.h>
int main(void)
{
    int A, B;
    double C;
    scanf("%d %d", &A, &B);
    C = (double)A / B;
    printf("%.9f\n", C);

    return 0;
}