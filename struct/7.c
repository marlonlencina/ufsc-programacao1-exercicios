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
#include <string.h>
#define T_STR 100
typedef char string[T_STR];
struct estado {
    char letra_1;
    char letra_2;
    string nome;
    int populacao;
};

int main(){
    int option = -1;
    struct estado estados[3];
    int qntd_estados = 0;
    do{
        printf("Digite uma opção: \n");
        scanf("%i", &option);
        switch(option){
            case 1: // criar
                printf("Digite: (Letra 1, Letra 2, Nome e população nesta ordem). \n");
                scanf(" %c", &estados[qntd_estados].letra_1);
                scanf(" %c", &estados[qntd_estados].letra_2);
                getchar();
                fgets(estados[qntd_estados].nome, T_STR, stdin);
                estados[qntd_estados].nome[strlen(estados[qntd_estados].nome) - 1] = '\0';
                scanf("%i", &estados[qntd_estados].populacao);
                printf("Estado cadastrado. \n");
                qntd_estados++;
                break;
            case 2: // excluir
            {
                char letra_1, letra_2;
                printf("Digite: (Letra 1, Letra 2 | nesta ordem). \n");
                scanf(" %c", &letra_1);
                scanf(" %c", &letra_2);
                getchar();
                int nova_qntd_estados = 0;
                for(int i = 0; i < qntd_estados; i++){
                    if(estados[i].letra_1 != letra_1 && estados[i].letra_2 != letra_2){
                        estados[nova_qntd_estados] = estados[i];
                        nova_qntd_estados++;
                    }
                }

                if(nova_qntd_estados < qntd_estados){
                    printf("Deletado com sucesso. \n");
                } else {
                    printf("Estado não encontrado. \n");
                }

                qntd_estados = nova_qntd_estados;
                break;
            }
            case 3: // dados popul
                break;
            case 4: // listar estados
                for(int i = 0; i < qntd_estados; i++){
                    printf("Estado pos: %i. \n", i);
                    printf("Sigla: %c%c. \n", estados[i].letra_1, estados[i].letra_2);
                    printf("Nome: %s. \n", estados[i].nome);
                    printf("População: %i. \n", estados[i].populacao);
                }
                break;
            case 5: // pesquisar estado
                break;
            default:
                break;
        }
    }while(
        option != 0
    );

    return 0;
}