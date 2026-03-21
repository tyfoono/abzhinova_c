#include <stdio.h>
#include "sort.c"

int main(){
    int n, flag = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    quick_sort(arr, 0, n-1);
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){ flag = 1; break; }
    }

    (flag) ? printf("YES") : printf("NO");

    return 0;
}