#include <stdio.h>
int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int result1, result2, result3, result4;
    result1 = (A + B) % C;
    result2 = ((A % C) + (B % C)) % C;
    result3 = (A * B) % C;
    result4 = ((A % C) * (B % C)) % C;
    printf ("%d\n%d\n%d\n%d\n", result1, result2, result3, result4);
    return 0;
}
