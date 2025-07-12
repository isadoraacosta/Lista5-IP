#include <stdio.h>

int main(){

    int matriz[10][10];

    int vet[10000] = {0};

    int col, lin;

    int i, j, a;

    int indice = 0;

    scanf("%d", &lin);

    scanf("%d", &col);

    if(lin > 10 || lin <= 0 || col <= 0 || col > 10){
        printf("dimensao invalida\n");
        return 0;
    }


    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            int n;
            scanf("%d", &n);
            matriz[i][j] = n;
            vet[n] += 1;
        }
    }


    int tem = 0;

    int virgula = 0;

    for(a = 1000; a >= 0; a--){
        if(vet[a] == 1){
             if(virgula == 1){
                printf(",");
             }
             printf("%d" , a);
             virgula = 1;
             tem = 1;
            
        }
           
    }
       


    if(tem == 0){
        printf("sem elementos unicos\n");
    }

    return 0;
}









   // indice = 0;

    // int tem = 0;

    // for(i = 0; i < lin; i++){
    //     for(j = 0; j < col; j++){
    //         for(a = 0; a < indice; a++){
    //             if(vet[a] == matriz[i][j]){
    //                 tem = 1;
    //                 break;
    //             }
    //         }

    //         if(tem == 0){
    //             vet[indice] = matriz[i][j];
    //             indice++;
    //         }
            
    //     }
    // }
  
        // }

    // int tem = 0;

    // int virgula = 0;


        // indice = 0;

        // int tem = 0;

        // for(i = 0; i < lin; i++){
        //     for(j = 0; j < col; j++){
        //         vet[matriz[i][j]] ++;
        //         tem = 1;
        //   