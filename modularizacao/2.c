/*
Escreva um programa que leia uma matriz de N x N elementos de inteiros. O programa deverá mostrar
todos os elementos da diagonal principal e todos os elementos da diagonal secundária. O programa
também deve permitir localizar um determinado elemento na matriz. Todas as funcionalidades do
programa devem ser escritas como funções. No caso da função para localizar um elemento da matriz,
faça com que ele retorne a posição do elemento na matriz, linha e coluna. Como em C uma função
deve retornar apenas um valor, faça com que a função retorno uma struct que tenha como campos a
linha e a coluna.
*/

#include <stdio.h>
#define N 3

struct item {
    int n;
    int i;
    int j;
    int has_found;
};

void fulfillMatriz(int m[N][N]);
void findDgMain(int m[N][N]);
void findDgSecundary(int m[N][N]);
struct item findItemOnMatriz(int m[N][N]);

int main() {
    int matriz[N][N];
    fulfillMatriz(matriz);
    findDgMain(matriz);
    findDgSecundary(matriz);
    struct item object = findItemOnMatriz(matriz);

    if(object.has_found){
        printf("Achei seu elemento (%i) em [i: %i][j: %i]. \n", object.n, object.i, object.j);
    } else {
        printf("Não sobrou nada. \n");
    }

    return 0;
}

void fulfillMatriz(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%i", &m[i][j]);
        }
    }
}

void findDgMain(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            i == j && printf("Elemento DP [i:%i][j:%i]: %i.\n", i, j, m[i][j]);
        }
    }
}

void findDgSecundary(int m[N][N]){
    for(int i = 0, j = N - 1; i < N; i++, j--){
        printf("Elemento DS [i:%i][j:%i]: %i.\n", i, j, m[i][j]);
    }
}

struct item findItemOnMatriz(int m[N][N]){
        struct item object;
        int n = 0;
        int has_found = 0;
        printf("Digite o N a ser localizado. \n");
        scanf("%i", &n);

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(m[i][j] == n){
                    object.n = n;
                    object.i = i;
                    object.j = j;
                    has_found = 1;
                }
            }  
        }

        if(!has_found){
            object.n = -1;
            object.i = -1;
            object.j = -1;
            object.has_found = has_found;
        }
        

        return object;
}
