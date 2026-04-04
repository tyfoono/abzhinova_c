#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int age;
};

struct Student input_student(){
    struct Student res;
    printf("input name: ");
    scanf("%s", res.name);

    printf("input age: ");
    scanf("%d", &res.age);
    
    return res;
}

void print_student(struct Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
}

int main(){
    int n;
    scanf("%d", &n);

    struct Student *arr = calloc(n, sizeof(struct Student));

    for(int i = 0; i < n; i++) arr[i] = input_student();

    int max_age = arr[0].age, oldest_index = 0;

    for(int i = 0; i < n; i++){
        printf("\n-------------\n");
        print_student(arr[i]);
        printf("-------------\n");

        if(arr[i].age > max_age){
            max_age = arr[i].age;
            oldest_index = i;
        }

    }

    printf("oldest student on index %d: \n", oldest_index);
    print_student(arr[oldest_index]); 

    free(arr);
    return 0;
}
