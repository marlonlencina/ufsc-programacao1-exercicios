/*

Escreva um programa que leia uma string e então substitua todos as vogais por @. Na sequência mostre a string
resultante.

*/

#include <stdio.h>

#define MAX_SIZE_STR 100
typedef char string[MAX_SIZE_STR];

int main(){

    string str_typed;
    fgets(str_typed, MAX_SIZE_STR, stdin);

    for(int i = 0; str_typed[i] != '\0'; i++){
        int is_vogal = str_typed[i] == 'a' || str_typed[i] == 'e' || str_typed[i] == 'i' || str_typed[i] == 'o' || str_typed[i] == 'u';
        if(is_vogal){
            str_typed[i] = '@';
        }
    }

    printf("%s.\n", str_typed);

    return 0;
}