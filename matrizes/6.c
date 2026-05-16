/*

Escreva um algoritmo que receba uma matriz B[9][9] de reais e retorne a soma
dos elementos das linhas pares de B.

*/


#include <stdio.h>

int main(){

    const int cols = 3;
    const int rows = 3;

    float matriz[rows][cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        int counter_per_row = 0;
        int is_row_even = i % 2 == 0;

        if(is_row_even){
            for(int j = 0; j < cols; j++){
                counter_per_row+= matriz[i][j];
            }
            printf("É PAR FI. linha: %i. soma: %i. \n",i, counter_per_row);
        }
    }

    return 0;
}