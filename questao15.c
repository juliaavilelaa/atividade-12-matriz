#include <stdio.h>
#include <stdlib.h>

#define numAlunos 5
#define numQuestoes 10

int calcularPontuacao(char respostasAluno[numQuestoes], char gabarito[numQuestoes]) {
    int pontuacao = 0;
    for (int i = 0; i < numQuestoes; i++) {
        if (respostasAluno[i] == gabarito[i]) {
            pontuacao++;
        }
    }
    return pontuacao;
}

int main() {
    char respostasAlunos[numAlunos][numQuestoes];
    char gabarito[numQuestoes];
    int resultados[numAlunos];

    printf("Informe as respostas dos %d alunos (A, B, C):\n", numAlunos);
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < numQuestoes; j++) {
            scanf(" %c", &respostasAlunos[i][j]);
        }
    }

    printf("Informe o gabarito das respostas (A, B, C):\n");
    for (int i = 0; i < numQuestoes; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < numAlunos; i++) {
        resultados[i] = calcularPontuacao(respostasAlunos[i], gabarito);
    }

    printf("Pontuacoes dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultados[i]);
    }

    return 0;
}