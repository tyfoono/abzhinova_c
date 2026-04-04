#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;

    putc('1', file);
    putc('2', file);
    putc('3', file);

    fclose(file);

    file = fopen("test.txt", "r");

    if (file == NULL) return 1;

    int ch;
    while ((ch = getc(file)) != EOF) printf("%c", ch);
    
    fclose(file);
    return 0;
}