#include <stdio.h>

#define TAM 2

int main(){

    double matriz[TAM][TAM];

    double result[TAM][TAM];

    int i,j,x;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){

            result[i][j] = 0;
            for(x =0; x < 2; x++){
                result[i][j] += matriz[i][x] * matriz[x][j];
            }
        }
    }


    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%.3lf ", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}