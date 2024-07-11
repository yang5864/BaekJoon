#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    char str[n][21];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &arr[i], str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(str[i]); j++)
        {
            for (int k = 0; k < arr[i]; k++)
            {
                printf("%c", str[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}