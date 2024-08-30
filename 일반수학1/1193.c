#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int diagonal = 1;  // 현재 대각선의 번호
    int sum = 0;       // 현재까지의 대각선에 포함된 분수의 개수

    while (sum + diagonal < X) {
        sum += diagonal;
        diagonal++;
    }

    int position = X - sum;  // 해당 대각선에서의 위치

    int numerator, denominator;
    if (diagonal % 2 == 0) {
        numerator = position;
        denominator = diagonal - position + 1;
    } else {
        numerator = diagonal - position + 1;
        denominator = position;
    }

    printf("%d/%d\n", numerator, denominator);

    return 0;
}
