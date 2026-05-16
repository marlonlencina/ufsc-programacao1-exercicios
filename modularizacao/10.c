/*
 Faça uma função que receba como parâmetro o ano de nascimento de uma pessoa e então retorne a
idade da pessoa.
*/

#include <stdio.h>
int calcAge(int birthYear);

int main() {
    int birthYear = 2004;
    int age = calcAge(birthYear);
    printf("A sua idade é %i. \n", age);
    return 0;
}

int calcAge(int year){
    int age = 2026 - year;
    return age;
}  