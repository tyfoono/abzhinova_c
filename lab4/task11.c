#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) return 1;

    int c;

    while ((c = fgetc(file)) != EOF) printf("%c", c);
    
    if (feof(file))
        printf("\neof\n");
    if (ferror(file))
        printf("error\n");
    
        fclose(file);
    return 0;
}