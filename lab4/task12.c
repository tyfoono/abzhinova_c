#include <stdio.h>

struct Person {
    char name[100];
    int age;
};

int main() {
    struct Person p;
    int i = 0;
    char c;
    
    printf("input name: ");
    while (i < 100 && (c = getchar()) != '\n' && c != EOF) {
        p.name[i] = c;
        i++;
    }
    p.name[i] = '\0';

    printf("inout age: ");
    scanf("%d", &p.age);

    FILE *file = fopen("data.bin", "ab");
    
    if (file == NULL) return 1;
    fwrite(&p, sizeof(struct Person), 1, file);

    fclose(file);


    file = fopen("data.bin", "rb");
    if (file == NULL) return 1;
    
    printf("\nall records:\n");
    
    struct Person t;
    while (fread(&t, sizeof(struct Person), 1, file) == 1) {
        printf("Name: %s, Age: %d\n", t.name, t.age);
    }
    
    fclose(file);
    return 0;
}