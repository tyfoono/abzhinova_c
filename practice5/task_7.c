#include <stdio.h>

int main(){
    char str[] = "Lorem Ipsum dolor sit amet", c;
    char *p = str;
    int count = 0;

    scanf("%c", &c);

    while(*p) {
        if(*p == c) *p = ' ';
        printf("%c", *p);
        p++;
    }

    return 0;
}
