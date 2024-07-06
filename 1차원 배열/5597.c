#include <stdio.h>
int main() {
    int numbers[28];
    int students[30];

    for (int i = 0; i < 28; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 30; i++) {
        students[i] = i + 1;
    }

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 28; j++) {
            if (students[i] == numbers[j]) {
                students[i] = 0;
            }
        }
    }

    for (int i = 0; i < 30; i++) {
        if (students[i]!= 0) {
            printf("%d\n", students[i]);
        }
    }

    return 0;
}