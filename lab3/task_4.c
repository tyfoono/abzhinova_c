#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));

    printf("initial array: ");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    scanf("%d", &m);

    arr = realloc(arr, m * sizeof(int));

    for(int i = 0; i < m; i++){
        scanf("%d", &arr[i]);
    }

    printf("updated array: ");
    for(int i = 0; i < m; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    arr = realloc(arr, n * sizeof(int));

    printf("updated x2 array: ");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
