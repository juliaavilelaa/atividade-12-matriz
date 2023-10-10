#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int maiorquedez = 0;

    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            if (matriz[linha][coluna] > 10) {
                maiorquedez++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", maiorquedez);

    return 0;
}