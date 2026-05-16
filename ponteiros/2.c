/*
Escreva um programa em C para trocar os valores contido em duas variáveis do tipo inteiro. Escreva
uma função que receba estas variáveis por referência e então faça a troca do valor de a com b e vice-
versa.
*/

#include <stdio.h>
void inverseValues(int *x, int *y);
int main(){

    int a = 10;
    int b = 20;
    printf("a: %i, b: %i. \n", a, b);
    inverseValues(&a,&b);
    printf("valores invertidos. \n");
    printf("a: %i, b: %i. \n", a, b);
    return 0;
}

void inverseValues(int *x, int *y){
    // x é o endereço de x
    // y é o endereço de y
    int temp = *x;
    // quando eu uso o endereço com * eu pego o valor armazenado nesse endereço
    *x = *y;
    *y = temp;
}