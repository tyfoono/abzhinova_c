#include <stdio.h>

struct Person{
    char name[100];
    int age;
};

int main() {
    FILE *file = fopen("person.bin", "wb");
    if (file == NULL) return 1;

    struct Person person1 = {"Alex", 16};
    fwrite(&person1, sizeof(struct Person), 1, file);
    
    fclose(file);

    file = fopen("person.bin", "rb");
    if (file == NULL) return 1;

    struct Person person2;
    fread(&person2, sizeof(struct Person), 1, file);

    printf("name: %s\n", person2.name);
    printf("age: %d\n", person2.age);

    fclose(file);
    return 0;
}