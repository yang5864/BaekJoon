#include <stdio.h>
#include <string.h>
int main()
{
    int N, B;
    char result[36];
    int index = 0;

    scanf("%d %d", &N, &B);

    while (N > 0) {
        int remainder = N % B;
        if (remainder < 10)
            result[index++] = remainder + '0';
        else
            result[index++] = remainder - 10 + 'A';
        N /= B;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}
