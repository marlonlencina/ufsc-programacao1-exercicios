/*
Escreva um programa para ler um vetor de 20 elementos de inteiros. Mostre o
vetor com os dados ordenados em ordem descrescente.
*/

#define vetor_size 3
#include <stdio.h>

int main(){

    int numbers[vetor_size];
    for(int i = 0; i < vetor_size; i++){
        scanf("%i", &numbers[i]);
    }

    for(int i = 0; i < vetor_size; i++){
        for(int j = i + 1; j < vetor_size; j++){
            if(numbers[i] < numbers[j]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for(int i = 0; i < vetor_size; i++){
        printf("i: %i. number: %i \n", i, numbers[i]);
    }

    return 0;
}