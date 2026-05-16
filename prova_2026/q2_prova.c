#include <stdio.h>

/*
Escreva um programa para converter n valores em graus Celsius para Fahrenheit. O usuário deverá entrar com o
valor em Celsius e o programa deverá mostrar o valor convertido para Fahrenheit. Quando o usuário digitar 0 o
programa deverá parar de executar. A equação para conversão é a seguinte: F = (Celsius * 9/5) + 32.
*/


int main(){

    float temp_celsius = 1.0;
    scanf("%f", &temp_celsius);

    do{

        float temp_fahr = (temp_celsius * 9/5) + 32;
        printf("Temperatura %.2f (c) é igual a %.2f (f). \n", temp_celsius, temp_fahr);
        scanf("%f", &temp_celsius);


    }while(temp_celsius != 0.0);


    return 0;
}