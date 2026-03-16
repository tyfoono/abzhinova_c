#include <stdio.h>

int main() {

    int n, sum = 0, a;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        if(a < 0) sum += a;
    }

    printf("%d", sum);

    return 0;
}
