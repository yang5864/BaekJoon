#include <stdio.h>
#include <string.h>
int main()
{
    char word[101];
    scanf("%s", word);

    int count = 0;
    int len = strlen(word);

    for (int i = 0; i < len; i++)
    {
        if (word[i] == 'c')
        {
            if (word[i + 1] == '=' || word[i + 1] == '-')
            {
                i++;
            }
        }
        else if (word[i] == 'd')
        {
            if (word[i + 1] == 'z' && word[i + 2] == '=')
            {
                i += 2;
            }
            else if (word[i + 1] == '-')
            {
                i++;
            }
        }
        else if (word[i] == 'l' && word[i + 1] == 'j')
        {
            i++;
        }
        else if (word[i] == 'n' && word[i + 1] == 'j')
        {
            i++;
        }
        else if (word[i] == 's' && word[i + 1] == '=')
        {
            i++;
        }
        else if (word[i] == 'z' && word[i + 1] == '=')
        {
            i++;
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}