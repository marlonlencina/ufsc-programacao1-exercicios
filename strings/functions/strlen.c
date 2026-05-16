#include <stdio.h>
#include <string.h>

#define max_size 100
typedef char string[max_size];

int main (){

    string stg1;
    fgets(stg1, max_size, stdin);
    stg1[strlen(stg1) - 1] = '\0';

    printf("size string: %li. \n", strlen(stg1));

    // hardcoded
    printf("hardcoded.\n");
    /*int len = 0;
    for(int i = 0; stg1[i] != '\0'; i++){
        len++;
    }
    printf("size string: %i. \n", len);
    */
    int len = 0;
    while(stg1[len] != '\0'){
        len++;
    }
    printf("size string: %i. \n", len);

    return 0;
}