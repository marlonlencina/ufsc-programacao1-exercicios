/*
7. Escreva uma função que receba como parâmetro dois valores inteiros (x e y). A função deverá retornar
a quantidade de valores pares entre os parâmetros x e y.
*/

#include <stdio.h>
int evenNumbersBetween(int x, int y);

int main() {

    int qnt = evenNumbersBetween(1,10);
    printf("A quantidade de pares é %i. \n", qnt);

    return 0;
}

int evenNumbersBetween(int x, int y){
    int qnt = 0;
    for(int i = x; i <= y; i++){
        int is_even = i % 2 == 0;
        is_even && qnt++;
    }
    return qnt;
}  