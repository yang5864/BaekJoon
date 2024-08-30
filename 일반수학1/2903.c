#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int dot = 2;
    int sum;

    for (int i = 0; i < n; i++) {
        dot = 2 * dot - 1;
    }
    sum = dot * dot;

    printf("%d\n", sum);

    return 0;
}