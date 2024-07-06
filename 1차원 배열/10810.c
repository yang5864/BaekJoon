#include <stdio.h>
int main(){
    int N, M;
    scanf("%d %d",&N, &M);

    int basket[N];
    for (int i = 0; i < N; i++) {
        basket[i] = 0;
    }

    int a, b, c;
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int j = a - 1; j < b; j++) {
            basket[j] = c;
        }
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", basket[i]);
    }
    
    printf("\n");
    
    return 0;
}