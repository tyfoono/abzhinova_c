#include <stdio.h>

int main() {

    int n, count = 1;
    scanf("%d", &n);


    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if (i % j == 0) count++;
            if(j*j >= n) break;
        }
        if(count == 2) printf("%d ", i);
        count = 1;
    }

    return 0;
}
