#include <stdio.h>
#include <stdlib.h>


int main(){

    int dim;

    int **matriz;

    int a;

    int i, j;

    int dp, ds;

    scanf("%d", &dim);

    if(dim < 1 || dim > 10){
        printf("dimensao invalida\n");
        return 0;
    }

    matriz = (int **)malloc(dim * sizeof(int *));
    
    for(a = 0; a < dim; a++){
        matriz[a] = (int*)malloc(dim * sizeof(int));
    }

    if(matriz == NULL){
        exit(0);
    }

    for(i = 0; i < dim; i++){
        for(j = 0; j < dim; j++){
            scanf("%d", &matriz[i][j]);

        }
    }

    dp = 1;

    for(i = 0; i < dim; i++){
        for(j = 0; j < dim; j++){
            if(i != j){
                if(matriz[i][j] != matriz [j][i]){
                    dp = 0;
                    break;
                } 
            }



                
        }
    }


    ds = 1;

    for(i = 0; i < dim; i++){
        for(j = 0; j < dim; j++){
            if(matriz[i][j] != matriz[dim - 1 - j][dim - 1 -i]){
                ds = 0;
                break;
            }
                
        }
    }


    if(dp == 1 && ds == 1 ){
        printf("bissimetrica\n");
    }else{
        printf("nao bissimetrica\n");
    }


    for(a = 0; a < dim; a++){
        free(matriz[a]);
    }

    free(matriz);

    

    



    return 0;

}