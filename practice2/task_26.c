#include <stdio.h>

int main() {

    int n, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int t = i;
        while (t > 0) {
            sum += t % 10;
            t /= 10;
        }
        if(sum >= 10) printf("%d ", i);
        sum = 0;
    }

    return 0;
}


// Vopros