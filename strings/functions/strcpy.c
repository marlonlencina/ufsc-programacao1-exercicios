#include <stdio.h>
#include <string.h>

#define max_size 100
typedef char string[max_size];

int main (){

    string stg1, stg2, stg3;
    fgets(stg1, max_size, stdin);
    stg1[strlen(stg1) - 1] = '\0';

    //destino, origem
    strcpy(stg2, stg1);

    printf("stg1: %s. \n", stg1);
    printf("stg2 (copied): %s. \n", stg2);

    // hardcoded
    printf("hardcoded.\n");
    int i;
    for(i = 0; stg1[i] != '\0'; i++){
        stg3[i] = stg1[i];
    }
    stg3[i] = '\0';
    printf("stg3 (copied manually): %s. \n", stg3);


    return 0;
}