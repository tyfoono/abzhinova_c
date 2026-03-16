#include <stdio.h>
#include <limits.h>

int main() {

    int n, min = INT_MAX, a;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        if(a < min && a % 2 == 0) min = a;
    }

    printf("%d", min);

    return 0;
}
