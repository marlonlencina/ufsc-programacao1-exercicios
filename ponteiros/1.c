/*
Escreva um programa em C para ler uma variável inteira e em seguida utilize um ponteiro para apontar
para esta variável. Mostre o conteúdo da variável, o endereço ao qual ela se encontra na memória, o
endereço do ponteiro, o endereço apontado pelo ponteiro e o conteúdo do endereço apontado pelo
ponteiro.
*/

#include <stdio.h>
int main(){
    int integer = 0;
    printf("Valor da váriavel (INTEGER): %i. \n", integer);
    // para imprimir um endereço de memória você precisa usar a máscara de formataçao %p;
    printf("Endereço da váriavel (INTEGER): %p. \n", &integer);

    int *p_integer = &integer;

    printf("Valor da váriavel (P_INTEGER): %p. \n", p_integer); // endereço em memória
    printf("Endereço da váriavel (P_INTEGER): %p. \n", &p_integer); // endereço do ponteiro
    printf("Valor da váriavel armazenada no ponteiro (P_INTEGER): %i. \n", *p_integer); 


    return 0;
}