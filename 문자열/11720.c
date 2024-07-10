#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    
    char num[101];
    scanf("%s", num);

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += num[i] - '0';
    }

    printf("%d\n", sum);

    return 0;
}