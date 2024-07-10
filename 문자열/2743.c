#include <stdio.h>
int main() {
    char string[101];
    int length = 0;

    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++) {
        length++;
    }

    printf("%d\n", length);

    return 0;
}