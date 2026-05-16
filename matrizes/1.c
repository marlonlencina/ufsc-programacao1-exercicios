/*

Escreva um algoritmo para ler uma matriz 4 x 4 e então mostrar todos os
elementos da diagonal principal.

*/

#include <stdio.h>

#define rows 3
#define cols 3

// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33

// diag principal: coluna == linha
// diag sec: linha + 1, coluna - 1

int main(){

    int matriz[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%i", &matriz[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j){
                printf("item: %i. \n", matriz[i][j]);
            }
        }
    }

    return 0;
}