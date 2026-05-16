/*

Escreva um algoritmo para ler uma matriz 4 x 4 e então mostrar todos os
elementos da diagonal secundária.

*/

#include <stdio.h>

#define rows 3
#define cols 3

// 00 01 02
// 10 11 12
// 20 21 22

// diag principal: coluna == linha
// diag sec: linha + 1, coluna - 1 OU a soma dos dois elementos da diag sec é o tamanho da matriz 

int main(){

    int matriz[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%i", &matriz[i][j]);
        }
    }

    // i = 0, j == 2
    // i == 1, j == 1
    // i == 2, j == 0

    /*
    for(int i = 0; i < rows; i++){
        int col = cols - 1 - i;
        printf("item: %i. \n", matriz[i][col]);
    }
    */

    /*
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i + j == cols - 1){
                printf("item: %i. \n", matriz[i][j]);
            }
        }
    }
    */

    for(int i = 0, j = rows - 1; i < rows; i++, j--){
        printf("item: %i. \n", matriz[i][j]);
    }
    

    return 0;
}