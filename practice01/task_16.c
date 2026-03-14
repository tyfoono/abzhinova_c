#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    if(x > 0){ printf("%d", x*x); }
    else if(x == 0){ printf("0"); }
    if(x < 0){ printf("%d", -x); }

    return 0;
}
