/*
. Escreva uma função para verificar se um determinado caractere é vogal ou consoante. A função deve
ter como retorno a letra V para vogal e C para consoante.
*/

#include <stdio.h>
char isVowelOrConsonant(char letter);

int main() {


    printf("A é %s. \n", isVowelOrConsonant('a') == 'V' ? "Vogal" : "Consoante");
    printf("B é %s. \n", isVowelOrConsonant('b') == 'V' ? "Vogal" : "Consoante");

    return 0;
}

char isVowelOrConsonant(char letter){
    int is_vowel = letter == 'a' || letter == 'A' ||
                   letter == 'e' || letter == 'E' ||
                   letter == 'i' || letter == 'I' ||
                   letter == 'o' || letter == 'O' ||
                   letter == 'u' || letter == 'U';

    return is_vowel ? 'V' : 'C';
}