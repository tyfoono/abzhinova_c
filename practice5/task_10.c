#include <stdio.h>

int main(){
    char str[] = "Hello";
    char *p = str;
    int len = 0;

    while(*p) {
        len++;
        p++;
    }

    p = str;
    int part_1 = len / 2;
    for(int i = 0; i < part_1; i++){
        printf("%c", *p);
        p++;
    } 
    printf("\n");
    for(int i = 0; i < len - part_1; i++) {
        printf("%c", *p);
        p++;
    }
    return 0;
}
