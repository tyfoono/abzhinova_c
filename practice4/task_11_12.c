#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];

    int *ptr;
    for(ptr = arr; ptr < arr + n; ++ptr){
        int x;
        scanf("%d", &x);
        *ptr = x;
    }

    for(ptr = arr; ptr < arr + n; ++ptr){
        sum += *ptr;
    }

    printf("%d", sum);
    return 0;
}
