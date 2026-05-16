/*

Elabore um algoritmo que receba uma matriz A[12][12] e retorne um vetor com a
soma de cada uma das linhas de A.

*/

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

    float vetor_sum_rows[rows];

    for(int i = 0; i < rows; i++){
        int counter_per_row = 0;
        for(int j = 0; j < cols; j++){
            counter_per_row+= matriz[i][j];
        }
        vetor_sum_rows[i] = counter_per_row;
    }


    for(int i = 0; i < rows; i++){
        printf("soma por linha (%i): %.2f. \n",i, vetor_sum_rows[i]);
    }

    return 0;
}