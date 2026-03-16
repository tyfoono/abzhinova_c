#include <stdio.h>

int main() {

    int n, k, count = 0;
    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            count += (i + j == k);
        } 
    }

    printf("%d", count);

    return 0;
}
