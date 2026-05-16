/*

Faça um algoritmo para ler uma matriz de 10 x 10 elementos de inteiros e então
localizar o maior elemento e mostrar sua posição.

*/

#include <stdio.h>

int main(){

    const int cols = 2;
    const int rows = 2;

    int matriz[rows][cols];
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%i", &matriz[i][j]);
        }
    }

    int greater_item = matriz[0][0];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(greater_item < matriz[i][j]){
                greater_item = matriz[i][j];
            }
        }
    }

    printf("GTI: %i.\n", greater_item);

    return 0;
}