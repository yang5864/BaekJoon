#include <stdio.h>
int main(void) {
    int A, B, C;
    scanf("%d\n%d", &A, &B);
    C = A * B;

    int three = A * (B % 10);
    int four = A * (B / 10 % 10);
    int five = A * (B / 100);

    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", C);
    return 0;
}