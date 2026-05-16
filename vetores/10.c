/*
Escreva um programa para ler um vetor de 20 elementos de inteiros. Mostre qual
é o menor número contido no vetor e sua posição.
*/

#include <stdio.h>

int main(){

    int numbers[20];
    for(int i = 0; i < 20; i++){
        scanf("%i", &numbers[i]);
    }

    int lower_number = numbers[0];

    for(int i = 0; i < 20; i++){
        if(numbers[i] < lower_number){
            lower_number = numbers[i];
        }
    }

    printf("lower_number: %i.", lower_number);
    return 0;
}