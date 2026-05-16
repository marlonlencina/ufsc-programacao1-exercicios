/*
Escreva uma função para copiar um vetor em outro. A função deve receber dois parâmetros, o primeiro
é o vetor a ser copiado e o segundo o vetor que será a cópia. Não esqueça que os vetores devem ter o
mesmo tamanho.
*/

#include <stdio.h>
#define N 5
void copyVetor(int source[N], int destiny[N], int size);
void printVetor(int vetor[N], int size);

int main() {
    int original[N] = {1,2,3,4,5};
    int copied[N] = {0};
    
    printf("Antes de copiar ------------\n");
    printVetor(original, sizeof(original) / sizeof(int));
    printVetor(copied, sizeof(original) / sizeof(int));

    printf("Depois de copiar ------------\n");
    copyVetor(original, copied, N);
    printVetor(original, sizeof(original) / sizeof(int));
    printVetor(copied, sizeof(original) / sizeof(int));
    return 0;
}

void copyVetor(int source[N], int destiny[N], int size){
    for(int i = 0; i < size; i++){
        destiny[i] = source[i];
    }
}

void printVetor(int vetor[N], int size){
    for(int i = 0; i < size; i++){
        printf("%i.\n", vetor[i]);
    }
}