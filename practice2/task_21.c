#include <stdio.h>

int main() {

    int n, fact = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2) fact *= i;
    }

    printf("%d", fact);

    return 0;
}
