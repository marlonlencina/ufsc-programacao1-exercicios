/*
Escreva um programa para ler um vetor de 20 elementos do tipo caractere. Após
a leitura mostre todas as vogais e suas posições no vetor.
*/

#include <stdio.h>

#define VETOR_SIZE 20
int main(){

    char letters[VETOR_SIZE];
    for(int i = 0; i < VETOR_SIZE; i++){
        scanf(" %c", &letters[i]);
    }

    for(int i = 0; i < VETOR_SIZE; i++){
        int is_vogal = letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'i' || letters[i] == 'o' || letters[i] == 'u';
        if(is_vogal){
            printf("(%c)(index: %i.) é vogal mi friend. \n", letters[i], i);
        }
    }
    return 0;
}