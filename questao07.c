#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j;
            } else if (i == j) {
                matriz[i][j] = 3 * i * i;
            } else {
                matriz[i][j] = 5 * j * j + 1;
            }
        }
    }

    printf("Matriz 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}