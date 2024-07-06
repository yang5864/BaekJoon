#include <stdio.h>
int main(){
    int num[9];
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    int max = 0;
    int max_index = 0;

    for (int i = 0; i < 9; i++) {
        if (num[i] > max) {
            max = num[i];
            max_index = i + 1;
        }
    }

    printf("%d\n%d\n", max, max_index);

    return 0;
}