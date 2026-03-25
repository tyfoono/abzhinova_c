#include <stdio.h>

int main(){
    int a = 10, b = 5;
    int *ptr_a = &a, *ptr_b = &b;

    printf("%d\n", sizeof(ptr_a));

    return 0;
}
