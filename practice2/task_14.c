#include <stdio.h>

int main() {

    int n, max, a;
    scanf("%d", &n);

    scanf("%d", &max);
    for(int i = 1; i < n; i++) {
        scanf("%d", &a);
        if(a >= max) max = a;
    }

    printf("%d", max);

    return 0;
}
