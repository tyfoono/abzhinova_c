#include <stdio.h>

int main(){
    int n = 10;

    int *ptr;
    ptr = &n;

    printf("%p = %d\n", ptr, *ptr);

    *ptr = 15;

    printf("%d", n);

    return 0;
}
