#include <stdio.h>
int main(void) {
    int N, k;
    scanf("%d", &N);
    if (N % 4 == 0) {
        k = N / 4;
    } else {
        k = N / 4 + 1;
    }

    for (int i = 0; i < k; i++) {
        printf("long ");
    }
    printf ("int\n");
    
    return 0;
}