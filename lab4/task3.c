#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;
    
    fputs("Lorem\n", file);
    fputs("Ipsum\n", file);

    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;

    char buff[100];
    while (fgets(buff, sizeof(buff), file) != NULL) printf("%s", buff);
    
    fclose(file);
    return 0;
}