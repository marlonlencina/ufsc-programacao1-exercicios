/*
Escreva uma função que receba como parâmetro um vetor de tamanho N e retorno a soma de todos os
seus elementos.
*/

#include <stdio.h>
#define V 5
int sumAllItems(int vetor[V]);

int main() {

    int vetorTeste[V] = {1,2,3,4,5};
    int total = sumAllItems(vetorTeste);
    printf("A soma de todos items é %i. \n", total);

    return 0;
}

int sumAllItems(int vetor[V]){
    int sum = 0;
    for(int i = 0; i < V; i++){
        sum += vetor[i];
    }
    return sum;
}  