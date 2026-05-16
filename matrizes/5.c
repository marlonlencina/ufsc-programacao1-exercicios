/*

Elabore um algoritmo para ler uma matriz de 10 x 10 elementos do tipo caractere
e então localizar e mostrar todas as vogais.

*/

#include <stdio.h>

int main(){

    const int cols = 2;
    const int rows = 2;

    char matriz[rows][cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf(" %c", &matriz[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            
            int is_vogal =  matriz[i][j] == 'a' ||
                            matriz[i][j] == 'e' ||
                            matriz[i][j] == 'i' ||
                            matriz[i][j] == 'o' ||
                            matriz[i][j] == 'u';

            if(is_vogal){
                printf("É VOGAL! %c - i: %i. - j: %i. \n", matriz[i][j], i, j);
            }

        }
    }

    return 0;
}