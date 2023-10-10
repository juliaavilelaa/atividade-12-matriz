#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int matriz[5][4];
    int maiorNotaFinal = -1;
    int matriculaMaiorNota = -1;
    float somaNotasFinais = 0;

    printf("Informe os dados dos alunos:\n");

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &matriz[i][0]);
        printf("Media das provas: ");
        scanf("%d", &matriz[i][1]);
        printf("Media dos trabalhos: ");
        scanf("%d", &matriz[i][2]);

        matriz[i][3] = matriz[i][1] + matriz[i][2];

        if (matriz[i][3] > maiorNotaFinal) {
            maiorNotaFinal = matriz[i][3];
            matriculaMaiorNota = matriz[i][0];
        }

        somaNotasFinais += matriz[i][3];
    }

    float mediaNotasFinais = somaNotasFinais/5;

    printf("Matricula do aluno com a maior nota final: %d\n", matriculaMaiorNota);

    printf("Media aritmetica das notas finais: %.2f\n", mediaNotasFinais);

    return 0;
}