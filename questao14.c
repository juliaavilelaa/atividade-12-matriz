#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numLinhas 5
#define numColunas 5
#define maximo 99

int gerarNumUnico(int numerosUsados[], int size) {
    int numero;
    do {
        numero = rand() % (maximo + 1);
    } while (numerosUsados[numero] == 1);
    numerosUsados[numero] = 1;
    return numero;
}

void gerarCartelaBingo(int cartela[numLinhas][numColunas]) {
    int numerosUsados[maximo + 1] = {0};

    for (int linha = 0; linha < numLinhas; linha++) {
        for (int col = 0; col < numColunas; col++) {
            cartela[linha][col] = gerarNumUnico(numerosUsados, maximo + 1);
        }
    }
}

void printCartelaBingo(int cartela[numLinhas][numColunas]) {
    for (int linha = 0; linha < numLinhas; linha++) {
        for (int col = 0; col < numColunas; col++) {
            printf("%2d ", cartela[linha][col]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    int bingocartela[numLinhas][numColunas];

    gerarCartelaBingo(bingocartela);
    printCartelaBingo(bingocartela);

    return 0;
}