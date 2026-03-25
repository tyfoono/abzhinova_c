#include <stdio.h>

int main(){
    char str[] = "Lorem Ipsum dolor sit amet!!!";
    char *p = str;
    int count = 0;

    while(*p) {
        if(*p == '!') { count++; }
        p++;
    }
    if(count >= 3) printf("STOP");

    return 0;
}
