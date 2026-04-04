#include <stdio.h>

struct Person{
    char name[100];
    int age;
};

int main() {
    FILE *file = fopen("people.bin", "wb");
    if (file == NULL) return 1;

    struct Person people[] = {{"Alex", 16}, {"Sona", 17}};

    fwrite(people, sizeof(struct Person), 2, file);
    fclose(file);

    file = fopen("people.bin", "rb");
    if (file == NULL) return 1;
    
    struct Person people2[2];
    fread(people2, sizeof(struct Person), 2, file);

    for (int i = 0; i < 2; i++) printf("name: %s age: %d\n", people2[i].name, people2[i].age);

    fclose(file);
    return 0;
}