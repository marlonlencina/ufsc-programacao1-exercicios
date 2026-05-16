#include <stdio.h>
#include <string.h>

#define T_STR 100
typedef char string[T_STR];

struct student {
    string name;
    string course;
    int start_year;
    float iaa;
};

int main (){

    struct student st1;

    fgets(st1.name, T_STR, stdin);
    fgets(st1.course, T_STR, stdin);
    st1.start_year = 2026;
    st1.iaa = 0.0;


    printf("s_name: %s. \n", st1.name);
    printf("s_course: %s. \n", st1.course);
    printf("s_start_year: %i. \n", st1.start_year);
    printf("s_iaa: %.2f. \n", st1.iaa);

    return 0;
}