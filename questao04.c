#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4];

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maiorValor = matriz[0][0];
    int linhaMaiorValor = 0;
    int colunaMaiorValor = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaiorValor = i;
                colunaMaiorValor = j;
            }
        }
    }

    printf("Matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n"); 
    }

    printf("O maior valor na matriz e %d, na linha %d e coluna %d.\n", maiorValor, linhaMaiorValor, colunaMaiorValor);

    return 0;
}
