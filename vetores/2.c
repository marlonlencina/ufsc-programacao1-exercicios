/*
Escreva um programa para ler um vetor de 10 elementos do tipo inteiro. Após a
leitura do vetor mostre todos os valores ímpares.
*/

#include <stdio.h>
#define size 10
int main(){
    int numbers[size];
    for(int i = 0; i < size; i++){
        scanf("%i", &numbers[i]);
    }

    for(int i = 0; i < size; i++){
        int is_even = numbers[i] % 2 == 0;
        if(is_even){
            printf("%i.\n", numbers[i]);
        }
    }
    return 0;
}