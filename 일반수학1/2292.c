#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    int layer = 1; // 현재 층
    int range = 1; // 각 층 최대 숫자

    while (a > range)
    {
        range += 6 * layer;
        layer++;
    }

    printf("%d\n", layer);

    return 0;
}