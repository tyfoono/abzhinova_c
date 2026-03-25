#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr_copy[n];
    int *ptr_arr;
    for(ptr_arr = arr; ptr_arr < arr + n; ++ptr_arr){
        int x;
        scanf("%d", &x);
        *ptr_arr = x;
    }
    int *ptr_copy = arr_copy;
    for(ptr_arr = arr; ptr_arr < arr + n; ++ptr_arr){
        *ptr_copy = *ptr_arr;
        ptr_copy++;
    }
    printf("arr: ");
    for(ptr_arr = arr; ptr_arr < arr + n; ++ptr_arr){
        printf("%d ", *ptr_arr);
    }

    printf("\narr copy: ");
    for(ptr_copy = arr_copy; ptr_copy < arr_copy + n; ++ptr_copy){
        printf("%d ", *ptr_copy);
    }

    return 0;
}
