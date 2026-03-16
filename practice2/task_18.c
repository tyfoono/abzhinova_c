#include <stdio.h>

int main() {

    int n, count = 0, a;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        if(a % 7 == 0) count++;
    }

    printf("%d", count);

    return 0;
}
