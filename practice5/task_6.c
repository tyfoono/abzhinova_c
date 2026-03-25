#include <stdio.h>

int main(){
    char str[] = "hello world";
    char *p = str;
    int len = 0;

    while(*p) {
        if(len % 2 != 0 && *p != ' ') {
            *p = *p - 32;
        }
        printf("%c", *p);
        len++;
        p++;
    }
    

    return 0;
}
