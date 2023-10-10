#include <stdio.h>
#include <stdlib.h>

void somarMatrizes(float matriz1[2][2], float matriz2[2][2], float resultado[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtrairMatrizes(float matriz1[2][2], float matriz2[2][2], float resultado[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void adicionarConstante(float matriz[2][2], float constante) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] += constante;
        }
    }
}

void imprimirMatriz(float matriz[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[2][2], matriz2[2][2], resultado[2][2];
    int opcao;
    float constante;

    printf("Digite os valores da primeira matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matriz2[i][j]);
        }
    }

    printf("Escolha uma opcao:\n");
    printf("1 - Somar as duas matrizes\n");
    printf("2 - Subtrair a primeira matriz da segunda matriz\n");
    printf("3 - Adicionar uma constante as duas matrizes\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            somarMatrizes(matriz1, matriz2, resultado);
            printf("Resultado da soma das matrizes:\n");
            imprimirMatriz(resultado);
            break;
        case 2:
            subtrairMatrizes(matriz1, matriz2, resultado);
            printf("Resultado da subtracao das matrizes:\n");
            imprimirMatriz(resultado);
            break;
        case 3:
            printf("Digite o valor da constante a ser adicionada: ");
            scanf("%f", &constante);
            adicionarConstante(matriz1, constante);
            adicionarConstante(matriz2, constante);
            printf("Matriz 1 apos adicionar a constante:\n");
            imprimirMatriz(matriz1);
            printf("Matriz 2 apos adicionar a constante:\n");
            imprimirMatriz(matriz2);
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}