#include <stdio.h>

#define DIM 2

int main(){

    int matriz[DIM][DIM];

    int i, j;

    int det;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }


    det = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    printf("%d\n", det);


    return 0;
}