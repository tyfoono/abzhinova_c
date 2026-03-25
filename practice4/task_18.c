#include <stdio.h>

int main(){
    int n, x, count = 0;
    scanf("%d", &n);
    int arr[n];

    int *ptr;
    for(ptr = arr; ptr < arr + n; ++ptr){
        int t;
        scanf("%d", &t);
        *ptr = t;
    }

    scanf("%d", &x);

    for(ptr = arr; ptr < arr + n; ++ptr){
        if(*ptr > x) count++;
    }

    printf("%d", count);
    return 0;
}
