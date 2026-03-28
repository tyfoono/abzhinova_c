#include <stdio.h>

int main() {

    int a = 1;
    float b = 3.14;
    char c = 'c';

    printf("a = %d \n", a);
    printf("address of a = %p \n\n", &a);
    printf("b = %f \n", b);
    printf("address of b = %p \n\n", &b);
    printf("c = %c \n", c);
    printf("address of c = %p", &c);

    return 0;
}
