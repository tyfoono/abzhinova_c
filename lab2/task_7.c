#include <stdio.h>

enum Courses {
    FIRST_COURSE,
    SECOND_COURSE,
    THIRD_COURSE,
    FOURTH_COURSE
};

struct Student {
    char name[100];
    int age;
    enum Courses course;
    float grade;
};

struct Student input_student() {
    struct Student res;
    printf("input name: ");
    scanf("%s", res.name);
    
    printf("input age: ");
    scanf("%d", &res.age);
    
    printf("input course number (1-4): ");
    int course;
    scanf("%d", &course);
    res.course = course - 1;
    
    printf("input average grade: ");
    scanf("%f", &res.grade);
    
    return res;
}

void print_student(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Course: %d\n", student.course + 1);
    printf("Average grade: %.2f\n", student.grade);
}

void add_student(struct Student *students, int *count, int max_size) {
    printf("\ninput new student info:\n");
    students[*count] = input_student();
    (*count)++;
}

void print_all_students(struct Student *students, int count) {
    for (int i = 0; i < count; i++) {
        printf("\n---------------------\n");
        printf("Student #%d\n", i + 1);
        print_student(students[i]);
    }
}

void search_by_name(struct Student *students, int count, char *name) {
    int found = 0;    
    for (int i = 0; i < count; i++) {
        int flag = 1;
        for (int j = 0; j < 100; j++) {
            if (students[i].name[j] != name[j]) {
                flag = 0;
                break;
            }
            if (students[i].name[j] == '\0' && name[j] == '\0') {
                break;
            }
        }
        
        if (flag) {
            printf("found\n");
            print_student(students[i]);
            found = 1;
        }
    }
    
    if (!found) {
        printf("not found\n");
    }
}

void sort_by_grade(struct Student *students, int count) {
    if (count <= 1) {
        return;
    }    
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].grade < students[j + 1].grade) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[100];
    int student_count = 0;
    int choice;
    char search_name[100];
    
    printf("enter data for initial 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\ninput student %d\n", i + 1);
        students[student_count] = input_student();
        student_count++;
    }
    
    do {
        printf("\n-----------------\n");
        printf("1. add student\n");
        printf("2. print all students\n");
        printf("3. search student by name\n");
        printf("4. sort students\n");
        printf("5. stop\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_student(students, &student_count, 100);
                break;
                
            case 2:
                print_all_students(students, student_count);
                break;
                
            case 3:
                printf("input name to search: ");
                scanf("%s", search_name);
                search_by_name(students, student_count, search_name);
                break;
                
            case 4:
                sort_by_grade(students, student_count);
                print_all_students(students, student_count);
                break;
                
            case 5:
                break;                
        }
    } while (choice != 5);
    
    return 0;
}