#include <stdio.h>
#include <stdlib.h>

int main(){


    int matriz[6][6] = {
        {0, 63, 210, 190, -1, 190},
        {63, 0, 160, 150, 95, 10},
        {210, 160, 0, 10, 1, 10},
        {190, 150, 10, 0, 10, 20},
        {10, 95, 7, 21, 0, 80},
        {190, 2, -1, 41, 80, 0}
    };

    int n;

    int *vet;

    int a, i, j;

    int soma;

    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    if(vet == NULL){
        return 0;
    }

    for(a = 0; a < n; a++){
        int num;
        scanf("%d", &num);
        vet[a] = num;
    }

    soma = 0;
    
    for(a = 0; a < n - 1; a++){
        i = vet[a];
        j = vet[a + 1];

        if(matriz[i][j] != -1){
            soma += matriz[i][j];
        } else{
            printf("rota invalida!\n");
            return 0;
        }

    }

    
    printf("soma: %d\n", soma);


    return 0;
}