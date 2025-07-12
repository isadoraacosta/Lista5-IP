#include <stdio.h>
#include <stdlib.h> 

int main(){

    int n;
    
    int **matriz;

    int a;

    int i, j;

    scanf("%d", &n);

    matriz = (int**)malloc(n * sizeof(int *));

    for(a = 0; a < n; a++){
        matriz[a] = (int *)malloc(sizeof(int));
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }


    for(i = 0; i < n; i++){ // controla as colunas da matriz 
        
        for(j = 0; j < n - 1 ; j++){ // controla a quant de vezes que o algoritmo de ordenacao vai rodar

            for(a = 0; a < n - j - 1; a++){ // compara os elementos e fazem os maiores descerem para as ultimas posicoes, ja que é em ordem crescente;
                int temp;
                if(matriz[a][i] > matriz[a+1][i]){
                    temp = matriz[a][i];
                    matriz[a][i]= matriz[a+1][i];
                    matriz[a+1][i] = temp; 
                }
            }
        }
    }


    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for(a = 0; a < n; a++){
        free(matriz[a]);
    }

    free(matriz);



    return 0;
}