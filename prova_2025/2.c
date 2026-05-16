/*
Escreva um programa para calcular o fatorial de um número inteiro positivo. Este
número deve ser informado pelo usuário. O fatorial de um número n é a multiplicação de
todos os antecessores de n até 1. Por exemplo, considerando n igual a 4 o fatorial é: 4 * 3
* 2 * 1. (2,5 pontos)
*/


int main(){
    int n = 0;
    int sum = 0;
    if(n < 0){return 0;}
    scanf("%i", &n);


    // 4! = 4.3.2.1 = 4.1 + 4.2 + 4.3 = 24;
    // 4 . 1 = 4
    // 4 . 2 = 8
    // 4 . 3 = 12


    for(int i = 1; i < n; 9++){
        int calc = n * 1;
        sum += calc;
    }

};