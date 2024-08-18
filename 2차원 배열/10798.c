#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][16] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (words[j][i] != '\0')
            {
                printf("%c", words[j][i]);
            }
        }
    }
    printf("\n");

    return 0;
}
