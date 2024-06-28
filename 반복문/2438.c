#include <stdio.h>
int main(void) {
    int k;
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
