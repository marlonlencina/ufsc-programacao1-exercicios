#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define T_STR           100
#define MAX_ESTADOS     50
#define FIM             0

typedef char string[T_STR];

typedef enum {AC = 1, AL, AM, AP, BA, CE, DF, ES, GO, MA, MG, MS, MT, PA, PB, PE, PI, PR, RJ, RN, RR, RS, RO, SC, SE, SP, TO} sigla_t;

typedef struct dados_estado {
    string nome;
    sigla_t sigla;
    string regiao;
    unsigned int populacao;
    float renda_per_capita;
} dados_estado_t;

// Cabeçalho das funções auxiliares
int menu(void);
void retirar_enter(string str);
dados_estado_t cadastro_novo_estado(void);
void listar_estados_cadastrados(void);
int pesquisar_estado_por_nome(string nome);
void mostra_dados_estado(int posicao);
void mostrar_estados_por_regiao(string regiao);
void somar_renda_per_capita_por_regiao(string regiao);


// Base dados estados
dados_estado_t estados[MAX_ESTADOS];
int qtd_estados_cadastrados = 0;

int main()
{
    int opcao;

    do {
        opcao = menu();

        switch (opcao) {
            case 1: estados[qtd_estados_cadastrados++] = cadastro_novo_estado();
                    break;

            case 2: listar_estados_cadastrados();
                    break;

            case 3: string pesquisa;
                    int resposta;
                    printf("Nome do estado a ser procurado: \n");
                    fgets(pesquisa, T_STR, stdin);
                    retirar_enter(pesquisa);
                    resposta = pesquisar_estado_por_nome(pesquisa); 

                    if (resposta == -1){
                        printf("Estado não encontrado!\n\n");
                    } else {
                        mostra_dados_estado(resposta);
                    }
                    break;
            case 4: 
                    string regiao;
                    fgets(regiao, T_STR, stdin);
                    regiao[strlen(regiao) - 1] = '\0';
                    mostrar_estados_por_regiao(regiao);
            break;
            case 5: 
                    string nome_regiao;
                    fgets(nome_regiao, T_STR, stdin);
                    nome_regiao[strlen(nome_regiao) - 1] = '\0';
                    somar_renda_per_capita_por_regiao(nome_regiao);
            break;
        }

    } while (opcao != FIM);

    return 0;
}

// Implementação das funções auxiliares
int menu(void)
{
    int opcao;

    printf("1.Cadastrar novo estado\n");
    printf("2.Listar estados cadastrados\n");
    printf("3.Localizar estado por nome\n");
    printf("4.Listar estados por regiao\n");
    printf("5.Calcular a renda media per capita por regiao\n");
    printf("0.Sair\n");
    printf(":::: ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

void mostrar_estados_por_regiao(string regiao){
    for(int i = 0; i < qtd_estados_cadastrados; i++){
        if(!strcmp(estados[i].regiao, regiao)){
            mostra_dados_estado(i);
        }
    }
}

void converter_maiusculo(string str){
    for(int i = 0; i < strlen(str); i++){
        str[i] = toupper(str[i]);
    }
}

void somar_renda_per_capita_por_regiao(string regiao){
    float sum_total = 0.0;
    int qnt_total = 0;

    for(int i = 0; i < qtd_estados_cadastrados; i++){
        if(!strcmp(estados[i].regiao, regiao)){
            sum_total += estados[i].renda_per_capita;
            qnt_total++;
        }
    }

    if(qnt_total > 0){
        sum_total = sum_total / (float) qnt_total;
        printf("A renda per capita média de %s é %.2f\n", regiao, sum_total);
    } else {
        printf("Nenhum estado encontrado na regiao %s\n", regiao);
    }
}

void retirar_enter(string str)
{
    str[strlen(str)-1] = '\0';
}

dados_estado_t cadastro_novo_estado(void)
{
    dados_estado_t estado;

    printf("Nome do estado..........: ");
    fgets(estado.nome, T_STR, stdin);
    retirar_enter(estado.nome);

    printf("Regiao do estado........: ");
    fgets(estado.regiao, T_STR, stdin);
    retirar_enter(estado.regiao);

    printf("Populacao...............: ");
    scanf("%i", &estado.populacao);

    printf("Renda per capita........: ");
    scanf("%f", &estado.renda_per_capita);

    return estado;
}

void listar_estados_cadastrados(void)
{
    for (int i = 0; i < qtd_estados_cadastrados; i++) {
        mostra_dados_estado(i);
    }
}

int pesquisar_estado_por_nome(string nome)
{
    for (int i = 0; i < qtd_estados_cadastrados; i++){
        if(strcmp(estados[i].nome, nome) == 0) {
            return i;
        }
    }

    return -1;
}

void mostra_dados_estado(int posicao)
{
        printf("Nome do estado..........: %s\n", estados[posicao].nome);
        printf("Regiao do estado........: %s\n", estados[posicao].regiao);
        printf("Populacao...............: %i\n", estados[posicao].populacao);
        printf("Renda per capita........: %.2f\n\n", estados[posicao].renda_per_capita);
}

