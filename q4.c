#include <stdio.h>

#define TAM 2

int main(){

    double mat[TAM][TAM];

    double t[TAM][TAM];

    double mult[TAM][TAM];
#include <stdio.h>

#define TAM 2

int main(){

    double mat[TAM][TAM];

    double t[TAM][TAM];

    double mult[TAM][TAM];

    int i, j, x;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
        }
    }


    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            t[i][j] = mat[j][i];
        }
    }

    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            mult[i][j] = 0;
            for(x = 0; x < TAM; x++){
                mult[i][j] += mat[i][x] * t[x][j];
            }
            printf("%.3lf ", mult[i][j]);
        }
         printf("\n");
    }



    return 0;
}
    int i, j, x;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            scanf("%d", &mat[i][j]);
        }
    }


    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            t[i][j] = mat[j][i];
        }
    }

    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            mult[i][j] = 0;
            for(x = 0; x < TAM; x++){
                mult[i][j] += mat[i][x] * t[x][j];
            }
            printf("%.3lf ", mult[i][j]);
        }
         printf("\n");
    }



    return 0;
}