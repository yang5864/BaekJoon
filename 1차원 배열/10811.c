#include <stdio.h>
int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    int basket[N];

    for (int i = 0; i < N; i++) {
        basket[i] = i + 1;
    }

    int a, b;

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        a--; b--;

        while (a < b) {
            int temp = basket[a];
            basket[a] = basket[b];
            basket[b] = temp;
            a++;
            b--;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", basket[i]);
    }

    printf("\n");
    
    return 0;
}