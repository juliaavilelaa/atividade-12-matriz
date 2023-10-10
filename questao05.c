#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int valorX;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valorX);

    int encontrou = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == valorX) {
                printf("O valor %d foi encontrado na linha %d e coluna %d.\n", valorX, i, j);
                encontrou = 1;
                break;
            }
        }
        if (encontrou) {
            break;
        }
    }

    if (!encontrou) {
        printf("O valor %d nao foi encontrado na matriz.\n", valorX);
    }

    return 0;
}
