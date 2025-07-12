#include <stdio.h>

int main(){

    int ordem;

    int matriz[100][100];

    scanf("%d", &ordem);

    int i, j;

    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            if(i + j == ordem -1){
                printf("%d\n", matriz[i][j]);
            }
        }
    }


    return 0;
}