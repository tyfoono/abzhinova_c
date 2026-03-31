#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[100];
    struct Date dob;
};

struct Date input_date(){
    struct Date res;
    printf("input year: ");
    scanf("%d", &res.year);

    printf("input month: ");
    scanf("%d", &res.month);

    printf("input day: ");
    scanf("%d", &res.day);

    return res;
}

struct Person input_person(){
    struct Person res;
    printf("input name: ");
    scanf("%s", res.name);

    printf("input date of birth: ");
    res.dob = input_date();
    
    return res;
}

void print_date(struct Date date) {
    printf("%d.%d.%d", date.day, date.month, date.year);
}

void print_person(struct Person person){
    printf("Name: %s\n", person.name);
    printf("Date of birth: ");
    print_date(person.dob);
}


int main(){
    struct Person people[5];

    for(int i = 0; i < 5; i++){
        printf("\n-----------\n");
        people[i] = input_person();
    }

    for(int i = 0; i < 5; i++){
        if(people[i].dob.year > 2000) {
            printf("\n-------------------\n");
            print_person(people[i]);
            printf("\n-------------------\n");
        }
    }

    return 0;
}
