#include <stdio.h>
int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int count[3] = {A, B, C};
    int max = 0;
    
    if (A == B && B == C) {
        printf("%d\n", 10000 + A * 1000);
    }
    else if (A == B || B == C || A == C) {
        if (A == B || B == C)
            printf("%d\n", 1000 + B * 100);
        else
            printf("%d\n", 1000 + C * 100);
    }
    else {
        for(int i = 0; i < 3; i++){
            if (count[i] >= max)
                max = count[i];
        }
        printf("%d\n", max * 100);
    }
    return 0;
}