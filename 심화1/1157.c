#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char word[1000001];
    int count[26] = {0};
    scanf("%s", word);

    int len = strlen(word);

    for (int i = 0; i < len; i++)
    {
        char ch = toupper(word[i]);
        count[ch - 'A']++;
    }

    int maxCount = 0;
    char maxChar;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxChar = 'A' + i;
        }
        else if (count[i] == maxCount)
        {
            maxChar = '?';
        }
    }

    printf("%c\n", maxChar);

    return 0;
}