#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    
    if (file == NULL) printf("error - couldn't open file\n");
    else printf("Файл успешно открыт\n");

    fclose(file);
    return 0;
}