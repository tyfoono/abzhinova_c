#include <stdio.h>

int main() {

    char c;

    scanf("%c", &c);

    if(c >= '0' && c <= '9') { printf("Number"); }
    else if(c >= 'A' && c <= 'z') { printf("Letter"); }
    else { printf("Other symbol"); }

    return 0;
}
