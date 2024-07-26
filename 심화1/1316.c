#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isGroupWord(char *word)
{
    bool alphabet[26] = {false};
    char prev_char = '\0';

    for (int i = 0; i < strlen(word); i++)
    {
        char current_char = word[i];

        if (current_char != prev_char)
        {
            if (alphabet[current_char - 'a'])
            {
                return false;
            }
            alphabet[current_char - 'a'] = true;
            prev_char = current_char;
        }
    }
    return true;
}
int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        char word[101];
        scanf("%s", word);

        if (isGroupWord(word))
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}