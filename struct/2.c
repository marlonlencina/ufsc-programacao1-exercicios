/*
Considere a seguinte estrutura heterogênea:
struct pontos_3D {
int x;
int y;
int z;
};
Escreva um programa para ler três variáveis do tipo struct pontos_3D e então comparar se existem
pontos iguais. Considere pontos iguais quando x, y e x forem iguais entre duas ou mais variáveis.
*/

#include <stdio.h>

struct pontos {
    int x;
    int y;
    int z;
};

int main (){

    struct pontos pt1;

    scanf("%i", &pt1.x);
    scanf("%i", &pt1.y);
    scanf("%i", &pt1.z);

    // xy, xz, yz possibilidades
    int has_same_points = pt1.x == pt1.y || pt1.x == pt1.z || pt1.y == pt1.z;
    if(has_same_points){
        printf("tem pontos iguais.\n");
    } else {
        printf("nao tem pontos iguais.\n");
    }
 
    return 0;
}