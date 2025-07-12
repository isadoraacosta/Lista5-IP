#include <stdio.h>
#include <stdlib.h>



int main(){

    int dim;

    int matriz[100][100];

    int i, j;

    scanf("%d", &dim);

    if(dim < 1 || dim > 1000){
        exit(0);
    }

    for(i = 0; i < dim; i++){
        for(j = 0; j < dim; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < dim; i++){
        for(j = 0; j < dim; j++){
            if(i == j){
                printf("%d\n", matriz[i][j]);
            }
        }
    }


    return 0; 
}