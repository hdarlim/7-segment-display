#include <stdio.h>

int main() {
    int numbers[10][7] = {0};

    

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}