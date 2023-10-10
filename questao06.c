#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz1[4][4];
    int matriz2[4][4];
    int matrizResultante[4][4];

    printf("Digite os elementos da primeira matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matrizResultante[i][j] = matriz1[i][j];
            } else {
                matrizResultante[i][j] = matriz2[i][j];
            }
        }
    }

    printf("Matriz resultante com os maiores valores:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
