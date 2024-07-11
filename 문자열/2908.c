#include <stdio.h>
#include <string.h>

int reverse_number(char number[]) {
    int length = strlen(number);
    char reversed[4];

    for (int i = 0; i < length; i++) {
        reversed[i] = number[(length - 1) - i];
    }
    reversed[length ] = '\0';

    return atoi(reversed);
}

int main() {
    char A[4], B[4];
    scanf("%s %s", A, B);

    int reversedA = reverse_number(A);
    int reversedB = reverse_number(B);

    if (reversedA > reversedB)
        printf("%d\n", reversedA);
    else
        printf("%d\n", reversedB);
    
    return 0;
}