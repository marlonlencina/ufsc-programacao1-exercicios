/*

Escreva um programa para ler N strings de tamanho máximo M. A estrutura de dados que comportará a string
será um vetor de tamanho N x M. Após a leitura das N strings mostre a matriz resultante.

*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE_STR 100
#define MAX_SIZE_VTR 3
typedef char string[MAX_SIZE_STR];

int main(){

    string sentences[MAX_SIZE_VTR][];
    for(int i = 0; i < MAX_SIZE_VTR; i++){
        string str_typed;
        fgets(str_typed, MAX_SIZE_STR, stdin);
        strcpy(sentences[i], str_typed);
    }

    for(int i = 0; i < MAX_SIZE_VTR; i++){
        printf("Sentence (%i): %s.\n", i, sentences[i]);
    }
   
    return 0;
}