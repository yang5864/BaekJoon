#include <stdio.h>
int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int sequence[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }

    for (int i = 0; i < N; i++) {
        if (sequence[i] < X) {
            printf("%d ", sequence[i]);
        }
    }

    printf("\n");
    
    return 0;
}