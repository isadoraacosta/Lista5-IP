#include <stdio.h>

#define TAM 6
int main(){

    int mat[TAM][TAM];

    int soma;

    int max;

    int i, j;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    soma = 0;

    max = -63;

    for(i = 0; i < TAM-2; i++){
        for(j = 0; j < TAM-2; j++){
            soma = mat[i][j] + mat[i][j+1] + mat[i][j+2] + 
            mat[i+1][j+1] + 
            mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2];

            if(soma > max){
            max = soma;
            }
        }   
    }

    printf("%d", max);



    return 0;
}