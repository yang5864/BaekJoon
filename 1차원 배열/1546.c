#include <stdio.h>
int main(){
    int N, max = 0;
    scanf("%d",&N);

    int score[N], sum = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
        if (score[i] > max) max = score[i];
    }

    double average = (double)sum / max * 100 / N;

    printf("%f", average);

    return 0;
}