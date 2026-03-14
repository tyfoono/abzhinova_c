#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    if(x % 2 == 0){ printf("%d is divisible by 2", x); } 
    else { printf("%d is not divisible by 2", x); }

    return 0;
}
