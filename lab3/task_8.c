#include <stdio.h>
#include <stdlib.h>

int* change_size(int *arr, int n){
    return realloc(arr, n * sizeof(n));
}

int* add_element(int *arr, int n, int elem, int index){
    int *res = change_size(arr, n + 1);
    if(res == NULL) return arr;

    for(int i = n; i > index; i--){
        res[i] = res[i - 1];
    }
    res[index] = elem;
    return res;
}

void delete_element(int *arr, int n, int e){
    int *ptr = &arr[e];

    for(int i = e + 1; i < n; i++){
        *ptr = arr[i];
        ptr++;
    }

    arr = change_size(arr, n - 1);
}

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n, choice = 0;
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    do {
        printf("1 - add element\n");
        printf("2 - delete element\n");
        printf("3 - print array\n");
        printf("4 - change size\n");
        printf("5 - exit\n");
    } while(choice != 5);

    free(arr);

    return 0;
}
