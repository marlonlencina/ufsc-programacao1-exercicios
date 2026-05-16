/*
Escreva um programa para armazenar a população de todos os estados brasileiros. O registro da sigla
do estado deverá ser feito por uma struct.
struct estado {
char letra_1;
char letra_2;
};
O programa deverá ter um menu de opção quer permita: incluir estados, excluir estados, dados da
população de um determinado estado, mostrar todos os estados cadastrados e pesquisar por um
estado específico.
*/
#include <stdio.h>
#define T_STR 100
typedef char string[T_STR];
struct estado {
    char letra_1;
    char letra_2;
    string nome;
    float populacao;
};

int main(){
    int option;
    for(;;){
        printf("Digite uma opção: \n");
        scanf("%i", &option);
        if(option == 0){
            break;
        }
        switch(option){
            case 1: // criar
                break;
            case 2: // excluir
                break;
            case 3: // dados popul
                break;
            case 4: // listar estados
                break;
            case 5: // pesquisar estado
                break;
            default:
                break;
        }
    }

    return 0;
}