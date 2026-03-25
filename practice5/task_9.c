#include <stdio.h>

int main(){
    char str[] = "Lorem Ipsum dolor sit amet1";
    char *p = str;
    int flag = 0;

    while(*p) {
        if(*p == *(p - 1)) {  flag = 1; break; }
        p++;
    }
    if(flag) printf("there is repetition");
    else printf("there is no repetition");

    return 0;
}
