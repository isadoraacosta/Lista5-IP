#include <stdio.h>
#include <stdlib.h>

int main(){


    int n, m;

    int a;

    int maior, menor, cmaior, cmenor;

    double pmaior, pmenor;

    int i, j;

    scanf("%d %d", &n, &m);

    int **matriz;

    matriz= (int**)malloc(n * sizeof(int));

    for(a = 0; a < n; a++){
        matriz[a] = (int*)malloc(m * sizeof(int));
    }

    if(matriz == NULL){
        exit(0);
    }


    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = -1;
    
  
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
         if(matriz[i][j] > maior){
            maior = matriz[i][j];
         }
        }
    }

    menor =1000;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }

    cmaior = 0;
    cmenor = 0;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(matriz[i][j] == maior){
                cmaior++;
            }
            if(matriz[i][j] == menor){
                cmenor++;
            } 
        }
    }
    
    pmaior = (cmaior / (double) (n * m) ) * 100;

    
    pmenor = (cmenor / (double) (n * m) ) * 100;

    
    printf("%d %.2lf%%\n", menor, pmenor);

    printf("%d %.2lf%%\n", maior, pmaior);





    




    for(a = 0; a < n; a++){
        free(matriz[a]);
    }

    free(matriz);

    return 0;
}