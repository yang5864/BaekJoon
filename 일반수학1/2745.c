#include <stdio.h>
#include <string.h>
int main()
{
    char N[10000];
    int B;
    scanf("%s %d", N, &B);

    int length = strlen(N);
    int result = 0;

    for (int i = 0; i < length; i++)
    {
        char c = N[i];
        int value;

        if (c >= '0' && c <= '9')
        {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'Z')
        {
            value = c - 'A' + 10;
        }

        result = result * B + value;
    }

    printf("%d\n", result);

    return 0;
}