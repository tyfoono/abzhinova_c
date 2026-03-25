#include <stdio.h>

int main(){
    int a = 10, b = 5;
    int *ptr_a = &b, **ptr_b = &ptr_a;

    **ptr_b = a;

    printf("%p %p\n", ptr_a, ptr_b);
    printf("%d\n", b);

    return 0;
}
