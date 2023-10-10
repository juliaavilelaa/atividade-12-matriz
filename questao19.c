#include <stdio.h>
#include <stdlib.h>
 
int main() {
    float matriz[3][6];

    printf("Informe a matriz 3x6 com valores reais:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Soma dos elementos das colunas impares:\n");
    for (int j = 1; j < 6; j += 2) {
        float somaColuna = 0;
        for (int i = 0; i < 3; i++) {
            somaColuna += matriz[i][j];
        }
        printf("Coluna %d: %.2f\n", j, somaColuna);
    }

    float somaColuna2 = 0, somaColuna4 = 0;
    for (int i = 0; i < 3; i++) {
        somaColuna2 += matriz[i][1];
        somaColuna4 += matriz[i][3];
    }
    float mediaColunas2e4 = (somaColuna2 + somaColuna4) / (3 * 2);
    printf("Media aritmetica dos elementos das colunas 2 e 4: %.2f\n", mediaColunas2e4);

    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    printf("Matriz modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}