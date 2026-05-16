/*
Escreva um programa para ler um vetor de 20 elementos de inteiros. Mostre qual
é o menor número contido no vetor e sua posição.
*/

#define vetor_size 3
#include <stdio.h>

int main(){

    int numbers[vetor_size];
    for(int i = 0; i < vetor_size; i++){
        scanf("%i", &numbers[i]);
    }

    int greater_number = numbers[0];

    for(int i = 0; i < vetor_size; i++){
        if(numbers[i] > greater_number){
            greater_number = numbers[i];
        }
    }

    printf("greater number: %i. \n", greater_number);
    return 0;
}