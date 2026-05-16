/*
Escreva um programa que leia uma string de tamanho 100 bytes. O programa deverá
percorrer a string e fazer as seguintes operações: para cada vogal transformá-la em
maiúsculo e para cada consoante transformá-la em minúsculo. Não é permitido utilizar
as funções toupper() e tolower() para as conversões. Não se esqueça que cada letra é
representada por um número inteiro na tabela ASCII, por exemplo, A é 65 e a é 97 (2,5
pontos)
*/
#include <stdio.h>
#include <string.h>
#define A 26
#define T 100
typedef char string[T];
int main(){

    string stg;
    fgets(stg, T, stdin);
    stg[strlen(stg) - 1] = '\0';

    int alpha[A] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G',
        'H', 'I', 'J', 'K', 'L', 'M', 'N',
        'O', 'P', 'Q', 'R', 'S', 'T', 'U',
        'V', 'W', 'X', 'Y', 'Z'
    };

    int alpha_l[A] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z'
    };

    for(int i = 0; stg[i] != '\0'; i++){
        int letter_p = 0;

        for(int j = 0; j < A; j++){
            if(stg[i] == alpha[j] || stg[i] == alpha_l[j]){
                letter_p = j;
            }
        }

        int is_vogal =
            stg[i] == 'A' || stg[i] == 'a' ||
            stg[i] == 'E' || stg[i] == 'e' ||
            stg[i] == 'I' || stg[i] == 'i' ||
            stg[i] == 'O' || stg[i] == 'o' ||
            stg[i] == 'U' || stg[i] == 'u';

        if(is_vogal){
            stg[i] = alpha[letter_p];
        } else {
            stg[i] = alpha_l[letter_p];
        }
    }

    return 0;
}