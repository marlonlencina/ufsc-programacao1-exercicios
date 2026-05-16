
/*
Escreva um programa para ler duas datas no formato dia, mês e ano e então compare as datas e
mostre qual a mais antiga.
*/

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main (){

    struct date date1, date2;

    printf("Data: 1.\n");
    scanf("%i", &date1.day);
    scanf("%i", &date1.month);
    scanf("%i", &date1.year);
    printf("%i/%i/%i.\n", date1.day, date1.month, date1.year);

    printf("Data: 2.\n");
    scanf("%i", &date2.day);
    scanf("%i", &date2.month);
    scanf("%i", &date2.year);
    printf("%i/%i/%i.\n", date2.day, date2.month, date2.year);

    struct date older_date;

    // 1994
    // 1972
    if(date1.year == date2.year){
        // verificar o mes
        if(date1.month == date2.month){
            // verificar o dia

            if(date1.day == date2.day){
                printf("sao o mesmo dia. \n");
            } else {
                // 15
                // 20
                if(date1.day > date2.day){
                    older_date.year = date2.year;
                    older_date.month = date2.month;
                    older_date.day = date2.day;
                }else {
                    older_date.year = date1.year;
                    older_date.month = date1.month;
                    older_date.day = date1.day;
                }

            }

        } else {
            // 04 2026
            // 05 2026
            if(date1.month > date2.month){
                older_date.year = date2.year;
                older_date.month = date2.month;
                older_date.day = date2.day;
            }else {
                older_date.year = date1.year;
                older_date.month = date1.month;
                older_date.day = date1.day;
            }
        }
    } else {
        if(date1.year > date2.year){
            older_date.year = date2.year;
            older_date.month = date2.month;
            older_date.day = date2.day;
        } else {
            older_date.year = date1.year;
            older_date.month = date1.month;
            older_date.day = date1.day;
        }
    }

    printf("Data mais antiga: %i/%i/%i.\n", older_date.day, older_date.month, older_date.year);

    return 0;
}