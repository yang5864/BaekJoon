#include <stdio.h>

int main()
{
    int n, x, y;
    int paper[100][100] = {0}; // 100x100 도화지를 0으로 초기화

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        // 색종이를 붙이는 작업
        for (int j = x; j < x + 10; j++)
        {
            for (int k = y; k < y + 10; k++)
            {
                paper[j][k] = 1; // 해당 위치를 1로 표시
            }
        }
    }

    int area = 0;

    // 검은색 영역 넓이 계산
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (paper[i][j] == 1)
            {
                area++;
            }
        }
    }

    printf("%d\n", area);

    return 0;
}
