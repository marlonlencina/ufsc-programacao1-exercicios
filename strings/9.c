
/*
Escreva um programa para ler uma frase informada pelo usuário. Na sequência conte quantas palavras existem
na frase informada.
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE_STR 100
typedef char string[MAX_SIZE_STR];

int main(){

    string sentence;
    fgets(sentence, MAX_SIZE_STR, stdin);
    int words = 1;

    for(int i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == ' '){
            words++;
        }
    }

    printf("sentence: %s. \n", sentence);
    printf("words: %i. \n", words);


    return 0;
}