/*
Escreva um programa para ler os seguintes dados de um aluno: identificação e as notas de três provas.
O programa deverá calcular as médias das provas para cada um dos alunos lidos. Utilize tipos de
dados heterogêneos para resolver o problema.
*/

#include <stdio.h>
#include <string.h>

#define QTD_EXAMS 3
#define T_STR 100
typedef char string[T_STR];

struct student {
    string name;
    float exams[QTD_EXAMS];
    float average_score;
};

int main (){

    struct student st1;

    fgets(st1.name, T_STR, stdin);
    for(int i = 0; i < 3; i++){
        scanf("%f", &st1.exams[i]);
    }

    int total_sum = 0;
    for(int i = 0; i < QTD_EXAMS; i++){
        total_sum += st1.exams[i];
    }
    st1.average_score = total_sum / QTD_EXAMS;

    printf("s_name: %s. \n", st1.name);
    printf("s_avg_score: %.2f. \n", st1.average_score);

    return 0;
}