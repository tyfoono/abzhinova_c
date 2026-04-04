#include <stdio.h>

int main() {
    char str[200];
    printf("input string: ");
    fgets(str, sizeof(str), stdin);

    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;

    fputs(str, file);

    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;

    while (fgets(str, sizeof(str), file) != NULL) printf("%s", str);
    
    fclose(file);
    return 0;
}