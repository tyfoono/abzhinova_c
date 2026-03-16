#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
        if(i*i >= n) break;
    }

    printf("%d", n);

    return 0;
}
