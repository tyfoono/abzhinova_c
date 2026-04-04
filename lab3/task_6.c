#include <stdio.h>
#include <stdlib.h>

int* add_element(int *arr, int n, int elem, int index){
    int *res = realloc(arr, (n + 1) * sizeof(int));
    if(res == NULL) return arr;

    for(int i = n; i > index; i--){
        res[i] = res[i - 1];
    }
    res[index] = elem;
    return res;
}

int main(){
    int n;
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    arr = add_element(arr, n, 2, 4);

    for(int i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
