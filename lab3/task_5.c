#include <stdio.h>
#include <stdlib.h>

void delete_element(int *arr, int n, int e){
    int *ptr = &arr[e];

    for(int i = e + 1; i < n; i++){
        *ptr = arr[i];
        ptr++;
    }

    arr = realloc(arr, (n - 1) * sizeof(int));
}

int main(){
    int n;
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    delete_element(arr, n, 0);

    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
