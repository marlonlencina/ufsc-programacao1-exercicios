#include <stdio.h>

#define T_STR 100

int main()
{
    char string[T_STR];
    int pos = 0;

    do {
        scanf("%c", &string[pos]);
        getchar();
        pos++;
    } while (string[pos-1] != '\n');
    
    string[pos-1] = '\0';

    printf("%s.\n", string);

    return 0;
}