#include <stdio.h>

int main()
{
    int A, B; // 현재 시각(시, 분)
    int C;    // 요리에 필요한 시간(분)

    scanf("%d %d", &A, &B); // 현재 시각 입력받기
    scanf("%d", &C);        // 요리 시간 입력받기

    B += C;      // 요리 시간을 현재 분에 추가
    A += B / 60; // 추가된 분을 시간으로 환산
    B %= 60;     // 분은 60으로 나눈 나머지

    A %= 24; // 시간은 24로 나눈 나머지 (24시간제)

    printf("%d %d\n", A, B); // 최종 시각 출력

    return 0;
}
