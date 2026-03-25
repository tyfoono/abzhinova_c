#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int *ptr;
    for(ptr = arr; ptr < arr + n; ++ptr){
        int x;
        scanf("%d", &x);
        *ptr = x;
    }

    int *ptr_1 = arr, *ptr_2 = arr + n - 1;

    while(ptr_1 < ptr_2){
        // решение третьей
        int t = *ptr_1;
        *ptr_1 = *ptr_2;
        *ptr_2 = t;  
        ptr_1++;
        ptr_2--;   
    }

    for(ptr = arr; ptr < arr + n; ++ptr){
        printf("%d ", *ptr);
    }

    return 0;
}
