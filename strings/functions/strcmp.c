#include <stdio.h>
#include <string.h>

#define max_size 100
typedef char string[max_size];

int main (){

    string stg1, stg2;
    fgets(stg1, max_size, stdin);
    stg1[strlen(stg1) - 1] = '\0';
    fgets(stg2, max_size, stdin);
    stg2[strlen(stg2) - 1] = '\0';

    int is_the_same_string = strcmp(stg1, stg2) == 0;
    printf("(var) is_the_same_string: %i. \n", is_the_same_string);

    if(is_the_same_string){
        printf("is the same string. \n");
    }else{
        printf("its not the same string. \n");
    }


    // implementacao manual do strcmp
    printf("hard coded. \n");

    if(strlen(stg1) != strlen(stg2)){
                printf("its not the same string. \n");
    }else{
        int has_some_diference = 0;
        for(int i = 0; stg1[i] != '\0' || stg2[i] != '\0'; i++){
            if(stg1[i] != stg2[i]){
                has_some_diference = 1;
                break;
            }
        }

        if(has_some_diference){
            printf("its not the same string. \n");
        } else {
            printf("its the same string. \n");
        }
    }


    return 0;
}