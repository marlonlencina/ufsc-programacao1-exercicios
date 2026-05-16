/*

Escreva um programa que leia uma string de tamanho T. Depois peça para o usuário digitar um nome seguido de
um sobrenome. O programa deverá alterar a string para o formato, sobrenome, nome. Por exemplo, suponha
que o usuário tenha digitado a string José da Silva, o programa deverá alterar a string para da Silva, José.

*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE_STR 100
typedef char string[MAX_SIZE_STR];

int main(){

    string full_name, name, surname, formatted_str;
    fgets(full_name, MAX_SIZE_STR, stdin);
    full_name[strlen(full_name) - 1] = '\0';

    int has_passed_space = 0;

    for(int i = 0, j = 0; full_name[i] != '\0'; i++, j++){

        if(!has_passed_space && full_name[i] == ' '){
            has_passed_space = 1;
            i = 0;
            j++;
        }

        if(!has_passed_space){
            name[i] = full_name[j];
        } else {
            surname[i] = full_name[j];
        }
    }

    //destino, origem
    strcat(formatted_str, surname);
    strcat(formatted_str, ", ");
    strcat(formatted_str, name);


    printf("full name: %s. \n", full_name);
    printf("name: %s. \n", name);
    printf("surname: %s. \n", surname);
    printf("formatted: %s. \n", formatted_str);

    return 0;
}