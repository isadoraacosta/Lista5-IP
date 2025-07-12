#include <stdio.h>

int main(){

    int matriz[100][100];

    int lin, col;

    int borda;

    int larg;

    int i, j;

    scanf("%d", &col);

    scanf("%d", &lin);

    scanf("%d", &larg);

    scanf("%d", &borda);

    // for(i = 0; i < lin; i++){
    //     for(j = 0; j < col; j++){
    //         if(i <= i + (larg-1) || i <= lin - larg && j <= j + (larg-1) || j >= col - larg){
    //             matriz[i][j] = borda;
    //         } else{
    //             matriz[i][j] = 0;
    //         }
    //     }
    // }


     for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            if(i < larg || i >= lin - larg || j < larg || j >= col - larg){
                matriz[i][j] = borda;
            } else{
                matriz[i][j] = 0;
            }
        }
    }

    printf("P2\n%d %d\n 255\n", col, lin);

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}