#include <stdio.h>

int main(){
    char str[] = "Lorem Ipsum dolor sit amet1!!!";
    char *p = str;
    int letter = 0, number = 0;

    while(*p) {
        if((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) { letter++; }
        else if(*p >= '0' && *p <= '9') { number++; }
        p++;
    }
    if(letter > 0 && number > 0) printf("password accepted");
    else printf("password denied");

    return 0;
}
