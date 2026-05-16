#include <stdio.h>
#include <string.h>

#define max_size 100
typedef char string[max_size];

int main (){

    string stg1, stg2, stg3, stg4;
    fgets(stg1, max_size, stdin);
    stg1[strlen(stg1) - 1] = '\0';
    fgets(stg2, max_size, stdin);
    stg2[strlen(stg2) - 1] = '\0';

    strcat(stg3, stg1);
    strcat(stg3, " ");
    strcat(stg3, stg2);

    printf("stg1: %s. \n", stg1);
    printf("stg2: %s. \n", stg2);
    printf("stg3: %s. \n", stg3);

    // implementacao manual do strcat
    int j = 0;

    for(int i = 0; i < strlen(stg1); i++){
        stg4[j] = stg1[i];
        j++;
    }

    for(int i = 0; i < strlen(stg2); i++){
        stg4[j] = stg2[i];
        j++;
    }

    stg4[j] = '\0';
    printf("stg4: %s. \n", stg4);


    return 0;
}