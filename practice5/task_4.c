#include <stdio.h>

int main(){
    char str[] = "Lorem Ipsum dolor sit amet";
    char *p = str;
    int len = 0;

    while(*p) {
        if(*p == 'a' || *p == 'e' || *p == 'u' || *p == 'i' || *p == 'o') { *p = '*'; }
        printf("%c", *p);
        p++;
    }

    return 0;
}
