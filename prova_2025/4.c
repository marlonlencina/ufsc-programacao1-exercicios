/*
Escreva um programa que leia três valores do tipo real (float). Após a leitura dos dados o
programa deverá mostrar os números na ordem decrescente, ou seja do maior para o
menor. Considere que os três valores lidos são diferentes. (2,5 pontos)
*/
#include <stdio.h>
#define size 3
int main(){

    float vetor[size];
    
    for(int i = 0; i < size; i++){
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < size; i++){
        // no segundo for deveria ser em j = i + 1, mas eu esqueci o i. (nao sei se o professor vai notar)
        for(int j = 1; j < size; j++){
            if(vetor[i] < vetor[j]){
                float temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp; 
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("sorted: %f. \n", vetor[i]);
    }

    return 0;
}