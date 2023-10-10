#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Matriz 5x5 com produtos dos indices da linha e da coluna:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
