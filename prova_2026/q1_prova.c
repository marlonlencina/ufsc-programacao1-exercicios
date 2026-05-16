#include <stdio.h>
#include <string.h>


#define MAX_SIZE 100
typedef char string[MAX_SIZE];

int main(){

    string stg1, stg2;

    fgets(stg1, MAX_SIZE, stdin);

    printf("v1 (com enter): %s. \n", stg1);

    stg1[strlen(stg1) - 1] = '\0';
    printf("v1 (sem enter): %s. \n", stg1);

    stg1[strlen(stg1) - 1] = '\0';
    fgets(stg2, MAX_SIZE, stdin);
    stg2[strlen(stg2) - 1] = '\0';

    for(int i = 0; i < strlen(stg2); i++){
        stg1[i] = stg2[i];
    }

    printf("v1: %s. \n", stg1);
    printf("v2: %s. \n", stg2);

    return 0;
}