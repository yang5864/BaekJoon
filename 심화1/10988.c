#include <stdio.h>
#include <string.h>
int main() {
    char word[101];
    scanf("%s", word);

    int len = strlen(word);
    int palindrome = 1;

    for (int i = 0; i < len; i++)
    {
        if(word[i] != word[len - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    printf("%d\n", palindrome);
    
    return 0;
}