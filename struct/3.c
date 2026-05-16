
/*
Faça um programa para ler um vetor do tipo struct pontos_3D. O vetor deverá ter ao menos 10 pontos
registrados. Na sequência, ordene o vetor pela coordenada x de cada ponto.
*/

#include <stdio.h>

#define T_VTR 3
struct pontos {
    int x;
    int y;
    int z;
};

int main (){

    struct pontos vetor_pontos[T_VTR];

    for(int i = 0; i < T_VTR; i++){
        scanf("%i", &vetor_pontos[i].x);
        scanf("%i", &vetor_pontos[i].z);
        scanf("%i", &vetor_pontos[i].y);
    }

    for(int i = 0; i < T_VTR; i++){
        printf("Vetor (%i): \n", i);
        printf("X (%i): \n", vetor_pontos[i].x);
        printf("Y (%i): \n", vetor_pontos[i].y);
        printf("Z (%i): \n", vetor_pontos[i].z);
    }

    for(int i = 0; i < T_VTR; i++){
        // sort de ordem crescente
        // pega um numero e compara com todos os outros (menos ele menos)
        for(int j = i + 1; j < T_VTR; j++){
            if(vetor_pontos[i].x > vetor_pontos[j].x){
                struct pontos temp = vetor_pontos[i];
                vetor_pontos[i] = vetor_pontos[j];
                vetor_pontos[j] = temp;
            }
        }
    }

    for(int i = 0; i < T_VTR; i++){
        printf("Vetor (%i): \n", i);
        printf("X (%i): \n", vetor_pontos[i].x);
        printf("Y (%i): \n", vetor_pontos[i].y);
        printf("Z (%i): \n", vetor_pontos[i].z);
    }
 
    return 0;
}