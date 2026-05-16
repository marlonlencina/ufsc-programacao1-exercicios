/*
Faça um programa que simule uma calculadora. A calculadora deve permitir a execução das quatro
operações (soma, subtração, divisão e multiplicação). Implemente cada operação como uma função
que receba dois parâmetros e retorno o resultado da operação. A chamada de cada operação deve ser
feita por um menu. Implemente o menu como uma função.
*/

#include <stdio.h>

void menu(void);
void shutdownMenu(void);
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main() {
    menu();
    return 0;
}

void menu(){
    int opt = 1, a = 0, b = 0;
    printf("1. Addition. \n");
    printf("2. Subtraction. \n");
    printf("3. Multiplication. \n");
    printf("4. Division. \n");

    printf("Digite uma opçao: \n");
    scanf("%i", &opt);

    if(opt == 0){
        shutdownMenu();
        return;
    }

    for(;;){
        printf("Digite uma opçao: \n");
        scanf("%i", &opt);

        if(opt == 0){
            shutdownMenu();
            return;
        }

        printf("Digite um n(a): \n");
        scanf("%i", &a);
        printf("Digite um n(b): \n");
        scanf("%i", &b);

        switch(opt){
            case 1:
                printf("sum: %i.\n", addition(a,b));
                break;
            case 2:
                printf("sub: %i.\n", subtraction(a,b));
                break;
            case 3:
                printf("mult: %i.\n", multiplication(a,b));
                break;
            case 4:
                printf("div: %i.\n", division(a,b));
                break;
        }
    }
}

void shutdownMenu(){
    printf("Encerrando calculadora.\n");
    return;
}

int addition(int a, int b){
    return a+b;
}

int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}