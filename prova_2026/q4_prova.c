#include <stdio.h>
#include <string.h>

#define max_size 100
typedef char string[max_size];
/*
Escreva um programa para criptografar uma mensagem. A criptografia deve ser baseada na seguinte regra: trocar
a por @, trocar b por -, trocar e por 8 e trocar o por j. Por exemplo: a mensagem Universidade ficará da seguinte
forma após o processo de criptografia: Universid@d8. O programa deverá mostrar a mensagem original digitada
em seguida a mensagem cifrada (criptografada). (2,5 pontos)
*/


int main(){

    string message, c_message;
    fgets(message, max_size, stdin);

    for(int i = 0; i < strlen(message); i++){
        switch(message[i]){
            case 'a':
                c_message[i] = '@';
            break;
            case 'b':
                c_message[i] = '-';            
            break;
            case 'e':
                c_message[i] = '8';
            break;
            case 'o':
                c_message[i] = 'j';
            break;
            default:
                c_message[i] = message[i];
                break;
        }
    }

    printf("original: %s. \n", message);
    printf("encripted message: %s. \n", c_message);


    return 0;
}