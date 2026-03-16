#include <stdio.h>

int main() {

    int n, count = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            count += !(i * j % 7);
        } 
    }

    printf("%d", count);

    return 0;
}
