#include <stdio.h>
#include <string.h>
int main()
{
    char input[1000001];
    gets(input);

    int count = 0;
    char *tok = strtok(input, " ");

    while (tok != NULL)
    {
        count++;
        tok = strtok(NULL, " ");
    }

    printf("%d\n", count);
    return 0;
}