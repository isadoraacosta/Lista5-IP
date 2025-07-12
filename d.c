#include <stdio.h>
#include <stdlib.h>

int main() {
    int M;
    scanf("%d", &M);

    // Número total de elementos da matriz triangular
    int K = M * (M + 1) / 2;

    // Alocação de ponteiros para as linhas da matriz original e da cópia
    int **matriz = (int **)malloc(M * sizeof(int *));
    int **matriz_original = (int **)malloc(M * sizeof(int *));
    
    if (matriz == NULL || matriz_original == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    // Alocar cada linha com número crescente de colunas
    for (int i = 0; i < M; i++) {
        matriz[i] = (int *)malloc((i + 1) * sizeof(int));
        matriz_original[i] = (int *)malloc((i + 1) * sizeof(int));
        if (matriz[i] == NULL || matriz_original[i] == NULL) {
            printf("Erro de alocação de memória.\n");
            return 1;
        }
    }

    // Preencher a matriz com os valores digitados
    for (int i = 0, count = 0; i < M; i++) {
        for (int j = 0; j <= i; j++, count++) {
            int valor;
            scanf("%d", &valor);
            matriz[i][j] = valor;
            matriz_original[i][j] = valor; // Cópia para exibir a original
        }
    }

    // Imprimir a matriz ORIGINAL
    printf("ORIGINAL\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", matriz_original[i][j]);
        }
        printf("\n");
    }

    // Modificar a matriz multiplicando por 5
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= i; j++) {
            matriz[i][j] *= 5;
        }
    }

    // Imprimir a matriz MODIFICADA
    printf("MODIFICADA\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória alocada
    for (int i = 0; i < M; i++) {
        free(matriz[i]);
        free(matriz_original[i]);
    }
    free(matriz);
    free(matriz_original);

    return 0;
}
