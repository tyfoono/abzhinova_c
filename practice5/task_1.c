#include <stdio.h>

int main(){
    char str[] = "Hello";
    char *p = str;

    while(*p) {
        printf("%c", *p);
        p++;
    }
    return 0;
}
