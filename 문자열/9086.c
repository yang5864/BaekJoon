#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);

    char str[n][1001];

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++) {
        int len = strlen(str[i]);
        printf("%c%c\n", str[i][0], str[i][len - 1]);
    }

    return 0;
}