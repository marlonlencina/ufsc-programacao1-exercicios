/*
Escreva uma função para verificar se um determinado elemento é primo ou não. A função deve receber
um valor e retornar verdadeiro ou falso. Utilize a biblioteca stdbol.h para definir true e false.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main() {
    printf("%i.\n", isPrime(1));
    printf("%i.\n", isPrime(2));
    printf("%i.\n", isPrime(3));
    printf("%i.\n", isPrime(4));
    printf("%i.\n", isPrime(5));
    return 0;
}

bool isPrime(int n) {
    if (n <= 1) return 0; // 0 e 1 não são primos.
    // Testa divisibilidade de 2 até a raiz quadrada de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // Se divisível, não é primo
    }
    return true; // É primo
}