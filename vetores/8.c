/*
Escreva um programa para ler um vetor de 20 elementos de inteiros. Faça a
soma de todos os elementos que estão nas posições ímpares do vetor.
*/

/*
Escreva um programa para ler um vetor de 20 elementos de inteiros. Faça a
soma de todos os elementos que estão nas posições pares do vetor.
*/

#include <stdio.h>

#define vetor_size 5
int main(){

    int numbers[vetor_size];
    int counter_sum = 0;
    for(int i = 0; i < vetor_size; i++){
        scanf("%i", &numbers[i]);
    }

    for(int i = 0; i < vetor_size; i++){
        int is_index_even = i % 2 == 0;
        if(!is_index_even){
            counter_sum += numbers[i];
        }
    }

    printf("soma total: %i. \n", counter_sum);

    return 0;
}