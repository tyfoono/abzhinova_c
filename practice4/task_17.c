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

    for(ptr = arr; ptr < arr + n; ++ptr){
        if(*ptr < 0) { printf("first negative: %d", *ptr); break; }
    }

    return 0;
}
