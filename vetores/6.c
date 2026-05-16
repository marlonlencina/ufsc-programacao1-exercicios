/*
Escreva um programa para ler um vetor de 20 elementos de caractere. Verifique
quais dos caracteres são vogais ou consoantes e armazene esta informação num
segundo vetor de caractere anotado “V” para vogal e “C” para consoante.
*/

#include <stdio.h>

int main(){

    char letters[20];
    char types[20];

    for(int i = 0; i < 20; i++){
        scanf(" %c", &letters[i]);
    }

    for(int i = 0; i < 20; i++){
        int is_vogal = letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'i' || letters[i] == 'o' || letters[i] == 'u';

        if(is_vogal){
            types[i] = 'V';
        } else {
            types[i] = 'C';
        }
    }

    for(int i = 0; i < 20; i++){
        printf("letter: %c - type: %c. \n", letters[i], types[i]);
    }

    return 0;
}