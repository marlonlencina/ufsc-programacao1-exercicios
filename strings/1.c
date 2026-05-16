/*

Escreva um programa para ler uma string utilizando a função scanf(). Implemente uma versão com do {
} while () e outra com while (). A string deverá ser lida caractere a caractere. Não esqueça de indicar o
fim da string com o caractere especial \0.

*/

#include <stdio.h>
int main() {

    char word[100];
    char item_typed;
    int i = 0;

    do {

        scanf("%c", &item_typed);
        if(item_typed == '\n'){
            break;
        }
        word[i] = item_typed;
        i++;
        getchar(); // come um enter que vem na sequencia do a

    } while(item_typed != '\n');

    word[i] = '\0';

    printf("%s\n", word);

    return 0;
}