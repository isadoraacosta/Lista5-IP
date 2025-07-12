#include <stdio.h>
#include <stdlib.h>

int main(){

    int M;

    scanf("%d", &M);

    int K= M * (M + 1) / 2;

    int i, j, x;

    int **matriz = (int **)malloc(M * sizeof(int *));

    int **mod = (int **)malloc(M * sizeof(int *));

    for( x = 0; x < M; x++){
        matriz[x] = (int *)malloc(x + 1 * sizeof(int));
        mod[x] = (int *)malloc(x + 1 * sizeof(int));
    }

    if(matriz == NULL || mod == NULL){
        exit(0);
    }

    for(i = 0; i < M; i++){
        for(i = 0; j <= i; j++){
            int valor;
            scanf("%d", &valor);
            matriz[i][j] = valor;
            mod[i][j] = valor * 5;
        }
    }

    for(i = 0; i < M; i++){
        for(i = 0; j <= i; j++){
            printf("%d", matriz[i][j]);
        }

        printf("\n");
    }

    
     for(i = 0; i < M; i++){
        for(i = 0; j <= i; j++){
            printf("%d", mod[i][j]);
        }

        printf("\n");
    }

    // liberar cada linha

    for(x = 0; x < M; x++){
        free(matriz[x]);
        free(mod[x]);
    }

    //liberar a matriz

    free(matriz);
    free(mod);



}