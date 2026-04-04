#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


struct Person {
    char name[100];
    int age;
    float height;
    int birth_year;
};


// добавление
int check_name(char *name) {
    int n = strlen(name);
    for(int i = 0; i < n; i++){
        if(!isalpha(name[i])) return 0;
    }
    return 1;
}

struct Person input_person(){
    struct Person res;

    printf("input name: ");
    scanf("%s", res.name);
    if(!check_name(res.name)) { 
        printf("name can only include letters\n");
        return;
    }
    

    printf("input age: ");
    scanf("%d", &res.age);
    if(res.age < 0) { 
        printf("age must be positive\n");
        return;
    }

    printf("input height: ");
    scanf("%f", &res.height);
    if(res.height < 0) { 
        printf("height must be positive\n");
        return;
    }

    printf("input birth year: ");
    scanf("%d", &res.birth_year);
    
    return res;
}

struct Person* add_person(struct Person *people, int *n) {
    struct Person *res = realloc(people, (*n + 1) * sizeof(struct Person));
    if(res == NULL) {
        printf("realloc error\n");
        return people;
    }
    struct Person new_person = input_person();
    res[*n] = new_person; 
    *n = *n + 1;
    return res;
}


// вывод
void print_person(struct Person person) {
    printf("%s - age: %d, height: %.2f, birth year: %d\n", person.name, person.age, person.height, person.birth_year);
}

void print_people(struct Person *people, int n) {
    for(int i = 0; i < n; i++){
        print_person(people[i]);
    }    
}


// сортировки
int compare_age(struct Person *a, struct Person *b) {
    return a->age - b->age;
}

int compare_name(struct Person *a, struct Person *b) {
    return strcmp(a->name, b->name);
}

void sort_by_age(struct Person *people, int n) {
    qsort(people, n, sizeof(struct Person), compare_age);
    printf("sorted by age\n");
}

void sort_by_name(struct Person *people, int n) {
    qsort(people, n, sizeof(struct Person), compare_name);
    printf("sorted by name\n");
}


// статистика
float average_age(struct Person *people, int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += people[i].age;
    }
    return sum / n;
}

float max_height(struct Person *people, int n) {
    float max = -1;
    for(int i = 0; i < n; i++){
        if(people[i].height > max) max = people[i].height;
    }
    return max;
}


// поиск
void search_by_name(struct Person *people, int n, char *name) {
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(people[i].name, name) == 0) {
            print_person(people[i]);
            flag = 1;
        }
    }
    if(!flag) printf("not found\n");
}

void search_by_age(struct Person *people, int n, int min_age, int max_age) {
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(people[i].age >= min_age && people[i].age <= max_age) {
            print_person(people[i]);
            flag = 1;
        }
    }
    if(!flag) printf("not found\n");
}


// работа с файлами
struct Person* load_binary(int *n) {
    char filename[100];
    printf("enter filename: ");
    scanf("%s", filename);
    
    FILE *f = fopen(filename, "rb");
    if(!f) {
        printf("error loading the file\n");
        *n = 0;
        return NULL;
    }
    
    fread(n, sizeof(int), 1, f);
    
    struct Person *res = malloc(*n * sizeof(struct Person));
    if(!res) {
        printf("Memory allocation failed!\n");
        fclose(f);
        *n = 0;
        return NULL;
    }
    
    fread(res, sizeof(struct Person), *n, f);
    fclose(f);
    
    printf("loaded %d people\n", *n);
    return res;
}

void save_binary(struct Person *people, int n) {
    char filename[100];
    printf("enter filename: ");
    scanf("%s", filename);
    
    FILE *f = fopen(filename, "wb");
    if(!f) {
        printf("error creating file\n");
        return;
    }
    
    fwrite(&n, sizeof(int), 1, f);
    fwrite(people, sizeof(struct Person), n, f);
    fclose(f);
    printf("saved %d people\n", n);
}


int main(){
    int n = 0, choice;
    struct Person *people = NULL;
    
    do {
        printf("--------------------------\n");
        printf("1. add person\n");
        printf("2. print all\n");
        printf("3. sort by name\n");
        printf("4. sort by age\n");
        printf("5. stats\n");
        printf("6. search by name\n");
        printf("7. search by age\n");
        printf("8. save\n");
        printf("9. load\n");
        printf("10. exit\n");
        printf("--------------------------\n");

        printf("choice: ");
        scanf("%d", &choice);
        

        switch(choice) {
            case 1: {
                people = add_person(people, &n);
                break;
            }
            case 2: {
                if(n > 0 && people != NULL) {
                    print_people(people, n);
                } else {
                    printf("array is empty, add people first\n");
                }
                break;
            }
            case 3: {
                if(n > 0 && people != NULL) {
                    sort_by_name(people, n);
                } else {
                    printf("array is empty, add people first\n");
                }
                break;
            }
            case 4: {
                if(n > 0 && people != NULL) {
                    sort_by_age(people, n);
                } else {
                    printf("array is empty, add people first\n");
                }
                break;
            }
            case 5: {
                if(n > 0 && people != NULL) {
                    printf("average age: %.2f\n", average_age(people, n));
                    printf("maximum height: %.2f\n", max_height(people, n));
                } else {
                    printf("array is empty, add people first\n");
                }
                break;
            }
            case 6: {
                if(n > 0 && people != NULL) {
                    char name[100];
                    printf("enter name: ");
                    scanf("%s", name);
                    search_by_name(people, n, name);
                } else {
                    printf("array is empty, add people first\n");
                }
                break;
            }
            case 7: {
                if(n > 0 && people != NULL) {
                    int min_age, max_age;
                    printf("min age: ");
                    scanf("%d", &min_age);
                    printf("max age: ");
                    scanf("%d", &max_age);
                    search_by_age(people, n, min_age, max_age);
                } else {
                    printf("array is empty, add people first\n");
                }
                break;
            }
            case 8: {
                if(n > 0 && people != NULL) {
                    save_binary(people, n);
                } else {
                    printf("array is empty, add people first\n");
                }
                break;
            }
            case 9: {
                free(people);
                people = load_binary(&n);
                break;
            }
            case 10: {
                break;
            }
            default: {
                printf("try again\n");
                break;
            }
        }
        
    } while (choice != 10);

    free(people);
    return 0;
}