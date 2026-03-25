#include <stdio.h>

int main(){
    char str[] = "Hello";
    char *p = str;
    int len = 0;

    while(*p) {
        len++;
        p++;
    }
    
    printf("%d", len);
    return 0;
}
