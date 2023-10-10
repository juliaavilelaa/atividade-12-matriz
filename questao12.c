#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int transposta[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz original 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
