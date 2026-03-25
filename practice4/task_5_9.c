#include <stdio.h>

int main(){
    int a = 10, b = 5;
    int *ptr_a = NULL, *ptr_b = &b;

    printf("%d\n", ptr_a == NULL);
    printf("%d\n", ptr_a == ptr_b);

    return 0;
}
