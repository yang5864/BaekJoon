#include <stdio.h>
int main()
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int distance = v - a; // 전체 거리에서 마지막 날 도달 거리를 제외한 나머지 거리
    int daily = a - b; // 매일 실제로 올라가는 거리
    int days = (distance + daily - 1) / daily + 1;

    printf("%d\n", days);

    return 0;
}