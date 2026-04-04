#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;

    fprintf(file, "%d %s %f\n", 10, "test", 3.14);
    
    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;
    
    int a;
    char s[100];
    float b;

    fscanf(file, "%d %s %f", &a, s, &b);
    printf("%d %s %f\n", a, s, b);
    
    fclose(file);
    return 0;
}