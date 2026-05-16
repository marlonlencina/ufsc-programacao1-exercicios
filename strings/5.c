/*

Escreva um programa para ler uma string de tamanho T. Após a leitura copie a string invertida para uma outra
variável. Na sequência compare as strings e verifique se são palíndromo. Por exemplo, se o usuário digitar ANA na
primeira string a inversão será ANA também.

*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE_STR 100
typedef char string[MAX_SIZE_STR];

int main(){

    string original_str, reversed_str;
    fgets(original_str, MAX_SIZE_STR, stdin);
    original_str[strlen(original_str) - 1] = '\0';
    //gremio // 6

    int i = 0;
    for(int j = strlen(original_str) - 1; original_str[i] != '\0'; i++, j--){
        reversed_str[i] = original_str[j];
    }
    reversed_str[i] = '\0';

    int is_palindromo = strcmp(original_str, reversed_str) == 0;

    if(is_palindromo){
        printf("é um palindromo.\n");
    } else {
        printf("nao é um palindromo.\n");
    }

    printf("original: %s. \n", original_str);
    printf("reversed: %s. \n", reversed_str);

    return 0;
}