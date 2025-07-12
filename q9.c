#include <stdio.h>
#include <stdlib.h>


int main(){

    int n;

    int a;

    int i, j;

    int soma;

    scanf("%d", &n);

    int **matriz = (int **)malloc(n * sizeof(int *));
    
    int **result = (int **)malloc(n * sizeof(int *));

    int **trans = (int **)malloc(n * sizeof(int *));

    for(a = 0; a < n; a++){
        matriz[a] = (int *)malloc(n * sizeof(int));
        result[a] = (int *)malloc(n * sizeof(int));
        trans[a] = (int *)malloc(n * sizeof(int));
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            trans[i][j] = matriz[j][i];
        }
    }

    soma = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
          if(i == j){
            soma += matriz[i][j];
          }
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
          result[i][j] = soma * matriz[i][j] + trans[i][j];
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


    


    return 0;
}