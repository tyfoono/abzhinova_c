#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float grade;
};

int main(){
    struct Student student;
    scanf("%s", student.name);
    scanf("%d", &student.age);
    scanf("%f", &student.grade);

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Average grade: %.2f\n", student.grade);

    return 0;
}
