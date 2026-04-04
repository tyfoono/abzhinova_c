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

struct Person *people = NULL;
int n = 0;

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

void add_person() {
    struct Person *res = realloc(people, (n + 1) * sizeof(struct Person));
    if(res == NULL) {
        printf("realloc error\n");
        return;
    }
    struct Person new_person = input_person();
    res[n] = new_person; 
    n = n + 1;
    people = res;
}


// вывод
void print_person(struct Person person) {
    printf("%s - age: %d, height: %.2f, birth year: %d\n", person.name, person.age, person.height, person.birth_year);
}

void print_people() {
    for(int i = 0; i < n; i++){
        print_person(people[i]);
    }    
}


// сортировки

int partition_by_name(int less, int more) {
    struct Person pivot = people[more];
    int j = less - 1;
    
    for(int i = less; i < more; i++) {
        if(strcmp(people[i].name, pivot.name) < 0) {
            j++;
            struct Person temp = people[i];
            people[i] = people[j];
            people[j] = temp;
        }
    }
    
    struct Person temp = people[j + 1];
    people[j + 1] = people[more];
    people[more] = temp;
    
    return j + 1;
}

void quick_sort_by_name(int less, int more) {
    if(less < more) {
        int pivot = partition_by_name(less, more);
        quick_sort_by_name(less, pivot - 1);
        quick_sort_by_name(pivot + 1, more);
    }
}

void sort_by_name() {
    if(n <= 1) {
        return;
    }
    quick_sort_by_name(0, n - 1);
    printf("Sorted by name.\n");
}

int partition_by_age(int less, int more) {
    struct Person pivot = people[more];
    int j = less - 1;
    
    for(int i = less; i < more; i++) {
        if(people[i].age < pivot.age) {
            j++;
            struct Person temp = people[i];
            people[i] = people[j];
            people[j] = temp;
        }
    }
    
    struct Person temp = people[j + 1];
    people[j + 1] = people[more];
    people[more] = temp;
    
    return j + 1;
}

void quick_sort_by_age(int less, int more) {
    if(less < more) {
        int pivot = partition_by_age(less, more);
        quick_sort_by_age(less, pivot - 1);
        quick_sort_by_age(pivot + 1, more);
    }
}

void sort_by_age() {
    if(n <= 1) {
        return;
    }
    quick_sort_by_age(0, n - 1);
    printf("sorted by age\n");
}


// статистика
float average_age() {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += people[i].age;
    }
    return sum / n;
}

float max_height() {
    float max = -1;
    for(int i = 0; i < n; i++){
        if(people[i].height > max) max = people[i].height;
    }
    return max;
}

void stats() {
    printf("average age: %f\n", average_age());
    printf("max height: %f\n", max_height());
}

// поиск
void search_by_name() {
    if(n == 0) {printf("array is empty, add people first"); return;}

    char name[100];
    printf("enter name: ");
    scanf("%s", name);
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(people[i].name, name) == 0) {
            print_person(people[i]);
            flag = 1;
        }
    }
    if(!flag) printf("not found\n");
}

void search_by_age() {
    if(n == 0) {printf("array is empty, add people first"); return;}


    int min_age, max_age;
    printf("min age: ");
    scanf("%d", &min_age);
    printf("max age: ");
    scanf("%d", &max_age);
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
void load_binary() {
    char filename[100];
    printf("enter filename: ");
    scanf("%s", filename);
    
    FILE *f = fopen(filename, "rb");
    if(!f) {
        printf("error loading the file\n");
        n = 0;
        return;
    }
    
    fread(&n, sizeof(int), 1, f);
    
    struct Person *res = malloc(n * sizeof(struct Person));
    if(!res) {
        printf("Memory allocation failed!\n");
        fclose(f);
        n = 0;
        return;
    }
    
    fread(res, sizeof(struct Person), n, f);
    fclose(f);
    
    printf("loaded %d people\n", n);
    people = res;
}

void save_binary() {
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


void (*menu_functions[])(void) = {
    add_person, 
    print_people, 
    sort_by_name,
    sort_by_age,
    stats,
    search_by_name, 
    search_by_age,
    save_binary,
    load_binary 
};


int main(){
    int choice;
    
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
        
        if(choice >= 1 && choice <= 9) menu_functions[choice - 1](); // Call the appropriate function
        else if(choice == 10) break;
        else printf("enter a number 1-10");
        
    } while (choice != 10); 

    free(people);
    return 0;
}
