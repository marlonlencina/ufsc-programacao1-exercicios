/*
 Escreva um programa que leia uma matriz de inteiros de tamanho 10 x 10. Após a leitura,
localize e mostre o valor do maior e do menor elemento contidos na matriz e suas
respectivas posições. Na sequência troque as posições entre eles. (2,5 pontos)
*/
#include <stdio.h>

#define size 3
int main(){

    int matriz[size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%i", &matriz[i][j]);
        }
    }


    int greater_n = matriz[0][0];
    int lower_n = matriz[0][0];
    int greater_row = 0;
    int greater_col = 0;
    int lower_row = 0;
    int lower_col = 0;



    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){

            if(greater_n < matriz[i][j]){
                greater_n = matriz[i][j];
                greater_row = i;
                greater_col = j;
            }
            if(lower_n > matriz[i][j]){
                lower_n = matriz[i][j];
                lower_row = i;
                lower_col = j;
            }   

            
        }
    }

    printf("gte(i: %i)(j: %i): %i. \n", greater_row, greater_col,greater_n);
    printf("lwr(i: %i)(j: %i): %i. \n", lower_row, lower_col, lower_n);

    matriz[greater_row][greater_col] = lower_n;
    matriz[lower_row][lower_col] = greater_n;

    return 0;

}