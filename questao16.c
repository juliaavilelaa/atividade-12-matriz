#include <stdio.h>
#include <stdlib.h>

#define numAlunos 10
#define numProvas 3

int main() {
    float notas[numAlunos][numProvas];
    int piorProva[numAlunos] = {0};

    printf("Informe as notas dos %d alunos em %d provas:\n", numAlunos, numProvas);

    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < numProvas; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < numAlunos; i++) {
        for (int j = 1; j < numProvas; j++) {
            if (notas[i][j] < notas[i][piorProva[i]]) {
                piorProva[i] = j;
            }
        }
    }

    int piorProva1 = 0, piorProva2 = 0, piorProva3 = 0;
    for (int i = 0; i < numAlunos; i++) {
        if (piorProva[i] == 0) {
            piorProva1++;
        } else if (piorProva[i] == 1) {
            piorProva2++;
        } else {
            piorProva3++;
        }
    }

    printf("Numero de alunos com pior nota na prova 1: %d\n", piorProva1);
    printf("Numero de alunos com pior nota na prova 2: %d\n", piorProva2);
    printf("Numero de alunos com pior nota na prova 3: %d\n", piorProva3);

    return 0;
}