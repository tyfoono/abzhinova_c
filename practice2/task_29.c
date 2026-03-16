#include <stdio.h>
#include <limits.h>

int main() {

    int n, max = INT_MIN, a;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        if(a > max && a % 5 == 0) max = a;
    }

    printf("%d", max);

    return 0;
}
