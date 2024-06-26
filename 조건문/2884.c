#include <stdio.h>
int main(void)
{
    int hours, minutes;
    scanf("%d %d", &hours, &minutes);
    if (minutes >= 45)
    {
        printf("%d %d\n", hours, minutes - 45);
    }
    else
    {
        if (hours == 0)
            printf("%d %d\n", 23, minutes + 15);
        else
            printf("%d %d\n", hours - 1, minutes + 15);
    }
    return 0;
}
