/*
Escreva uma função para converter uma temperatura medida em Fahrenheit em Celsius. A equação
para conversão de F para C é: C = (F – 32) * 5/9.
*/

#include <stdio.h>
int convertToCelsius(int temp);

int main() {
    int temp_f = 32;
    int temp_c = convertToCelsius(temp_f);
    printf("A temperatura em celsius é %i. \n", temp_c);
    return 0;
}

int convertToCelsius(int temp){
    int temp_c = (temp - 32) * 5 / 9;
    return temp_c;
}  