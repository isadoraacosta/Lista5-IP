// #include <stdio.h>
 
// int main() {
 
//     int linha, col;
 
//     scanf("%d", &linha);
//     scanf("%d", &col);
 
//     if (linha < 3 || col < 3) {
//         return 0;
//     }
 
//     int matriz[linha][col];
 
//     int a, b, c, d;
 
//     for (a = 0; a < linha; a++) {
//         for (b = 0; b < col; b++) {
//             scanf("%d", &matriz[a][b]);
//         }
//     }
 
//     int ok = 0;
 
//     for (c = 0; c < linha; c++) {
//         for (d = 0; d < col; d++) {
//             if (matriz[c][d] == 1111) {
//                 int cima = (c - 1 + linha) % linha;
//                 int baixo = (c + 1) % linha;
//                 int esquerda = (d - 1 + col) % col;
//                 int direita = (d + 1) % col;
 
//                 if (matriz[cima][d] == 4 &&
//                     matriz[baixo][d] == 8 &&
//                     matriz[c][esquerda] == 0 &&
//                     matriz[c][direita] == 0) {
//                     printf("%d %d\n", c, d);
//                     ok = 1;
//                 }
//             }
//         }
//     }
 
//     if (ok == 0) {
//         printf("WALLY NAO ESTA NA MATRIZ\n");
//     }
 
//     return 0;
// }



#include <stdio.h>
 
int main() {
 
    int linha, col;

    int i, j;
 
    scanf("%d", &linha);
    scanf("%d", &col);
 
    if (linha < 3 || col < 3) {
        return 0;
    }
 
    int matriz[linha][col];
 
    int a, b, c, d;
 
    for (a = 0; a < linha; a++) {
        for (b = 0; b < col; b++) {
            scanf("%d", &matriz[a][b]);
        }
    }
 
    int ok = 0;
 
    for (c = 0; c < linha; c++) {
        for (d = 0; d < col; d++) {
            if (matriz[c][d] == 1111) {
                int cima = (c - 1 + linha) % linha;
                int baixo = (c + 1) % linha;
                int direita = (d + 1) % col;
                int esquerda = (d - 1 + col) % col;

                if(matriz[cima][d] ==4 && matriz[baixo][d] == 8 && matriz[c][direita] == 0 && matriz[c][esquerda] == 0){
                    ok = 1;
                    i = c;
                    j = d;
                }
            }
        }
    }
 
    if (ok == 0) {
        printf("WALLY NAO ESTA NA MATRIZ\n");
    } else{
        printf("%d %d\n", i,j);
    }
 
    return 0;
}