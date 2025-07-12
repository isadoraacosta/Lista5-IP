#include <stdio.h>


//algoritmo bubble sort para ordenação de vetores

int main(){

    int vetor[10];


    for(int a = 0; a < 10; a++){
        int n;
        scanf("%d", &n);
        vetor[a] = n;
    }

    for(int a = 0; a < 10 - 1; a++){
        for(int b = a + 1; b < 10; b++ )
            if(vetor[a] > vetor[b]){
                int temp;
                temp = vetor[a];
                vetor[a] = vetor[b];
                vetor[b] = temp;
                
            }
    }

    for(int a = 0; a < 10; a++){
        printf("%d ", vetor[a]);
    }


    return 0;
}