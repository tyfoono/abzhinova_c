#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "rb");
    if (file == NULL) return 1;

    fseek(file, 0, SEEK_END);
    
    int size = ftell(file);
    
    printf("size: %ld", size);
    
    fclose(file);
    return 0;
}