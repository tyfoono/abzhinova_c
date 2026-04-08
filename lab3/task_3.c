#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maximum(int arr[], int n){
    int *ptr = arr;
    int res = *ptr;

    for(int i = 0; i < n; i++){
        if(*ptr > res) res = *ptr;
        ptr++;
    }

    return res;
}

int minimum(int arr[], int n){
    int *ptr = arr;
    int res = *ptr;

    for(int i = 0; i < n; i++){
        if(*ptr < res) res = *ptr;
        ptr++;
    }

    return res;
}

int sum_array(int arr[], int n){
    int sum = 0;
    int *ptr = arr;

    for(int i = 0; i < n; i++){
        sum += *ptr;
        ptr++;
    }   

    return sum;
}

int main(){
    int n;
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("max: %d\n", maximum(arr, n));
    printf("min: %d\n", minimum(arr, n));
    printf("sum: %d\n", sum_array(arr, n));

    free(arr);
    return 0;
}
