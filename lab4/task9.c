#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w+");
    if (file == NULL) return 1;

    fprintf(file, "ABCDEFGH");

    fseek(file, 5, 0);
    
    printf("%c\n", fgetc(file));
    
    fclose(file);
    return 0;
}