#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};

    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) return 1;

    fwrite(arr1, sizeof(int), 5, file);
    fclose(file);

    int arr2[5];

    file = fopen("data.bin", "rb");

    if (file == NULL) return 1;
    fread(arr2, sizeof(int), 5, file);

    for (int i = 0; i < 5; i++) printf("%d ", arr2[i]);

    fclose(file);
    return 0;
}