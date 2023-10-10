#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int somaColunas[3] = {0};

    printf("Digite uma matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            somaColunas[j] += matriz[i][j];
        }
    }

    printf("Array unidimensional gerado pelas somas das colunas da matriz:\n");

    for (int j = 0; j < 3; j++) {
        printf("%d ", somaColunas[j]);
    }

    return 0;
}