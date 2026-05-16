
/*
Escreva um programa para ler uma string de tamanho T. Faça com que o programa deixe no início da string todas
as consoantes e no final todas as vogais. Por exemplo, “abacaxi” ficará “bcxaaai”.
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE_STR 100
typedef char string[MAX_SIZE_STR];

int main(){

    string word, formatted_word;
    fgets(word, MAX_SIZE_STR, stdin);

    // ana
    // aan

    // copia as vogais
    int vogal_counter = 0;
    for(int i = 0; word[i] != '\0'; i++){
        int is_vogal = word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u';
        if(is_vogal){
            formatted_word[vogal_counter] = word[i];
            vogal_counter++;
        }
    }

    for(int i = 0; word[i] != '\0'; i++){
        int is_vogal = word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u';
        if(!is_vogal){
            formatted_word[vogal_counter] = word[i];
            vogal_counter++;
        }
    }

    printf("word: %s. \n", word);
    printf("f word: %s. \n", formatted_word);

    return 0;
}