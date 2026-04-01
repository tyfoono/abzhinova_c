#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

struct event {
    char title[100];
    int price;
    enum Day day;
};


int main(){
    enum Day day = FRIDAY;

    switch (day)
    {
    case MONDAY:
        printf("MONDAY");
        break;
    case TUESDAY:
        printf("TUESDAY");
        break;
    case WEDNESDAY:
        printf("WEDNESDAY");
        break;
    case THURSDAY:
        printf("THURSDAY");
        break;
    case FRIDAY:
        printf("FRIDAY");
        break;
    case SATURDAY:
        printf("SATURDAY");
        break;
    case SUNDAY:
        printf("SUNDAY");
        break;
    }

    return 0;
}
