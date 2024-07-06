#include <stdio.h>
int main(){
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d",&numbers[i]);
        numbers[i] %= 42;
    }

    int count = 10;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++) {
            if (numbers[i] == numbers[j]) {
                count--;
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}