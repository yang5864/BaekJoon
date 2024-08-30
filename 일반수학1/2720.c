#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    int Q[T], D[T], N[T], P[T];
    int total;
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &total);

        Q[i] = total / 25;
        total %= 25;

        D[i] = total / 10;
        total %= 10;

        N[i] = total / 5;
        total %= 5;

        P[i] = total;
    }

    for (int i = 0; i < T; i++)
    {
        printf("%d %d %d %d\n", Q[i], D[i], N[i], P[i]);
    }

    return 0;
}