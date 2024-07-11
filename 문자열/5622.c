#include <stdio.h>
#include <string.h>

int get_time(char c)
{
    if (c >= 'A' && c <= 'C')
        return 3;
    if (c >= 'D' && c <= 'F')
        return 4;
    if (c >= 'G' && c <= 'I')
        return 5;
    if (c >= 'J' && c <= 'L')
        return 6;
    if (c >= 'M' && c <= 'O')
        return 7;
    if (c >= 'P' && c <= 'S')
        return 8;
    if (c >= 'T' && c <= 'V')
        return 9;
    if (c >= 'W' && c <= 'Z')
        return 10;
    return 0;
}
int main()
{
    char word[16];
    scanf("%s", word);

    int total_time = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        total_time += get_time(word[i]);
    }

    printf("%d\n", total_time);

    return 0;
}