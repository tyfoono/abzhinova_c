#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float grade;
};

struct Student input_student(){
    struct Student res;
    printf("input name: ");
    scanf("%s", res.name);

    printf("input age: ");
    scanf("%d", &res.age);

    printf("input average grade: ");
    scanf("%f", &res.grade);
    
    return res;
}

void print_student(struct Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Average grade: %.2f\n", student.grade);
}

int main(){
    struct Student students[5];

    for(int i = 0; i < 5; i++){
        printf("input student %d data\n", i+1);
        students[i] = input_student();
    }

    for(int i = 0; i < 5; i++){
        printf("---------------------\n");
        print_student(students[i]);
    }

    return 0;
}
