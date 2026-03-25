#include <stdio.h>

int main(){
    char str[] = "Hello";
    char *p = str;
    int len = 0;

    while(*p) {
        len++;
        p++;
    }
    p--;
    while(len > 0) {
        printf("%c", *p);
        p--;
        len--;
    }
    
    return 0;
}
