#include <stdio.h>

int main() {

    int n, count = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
        if(i*i >= n) break;
    }

    printf("%d", count);

    return 0;
}
