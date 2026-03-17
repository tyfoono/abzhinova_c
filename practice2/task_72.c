#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int t = i, sum = 0, mult = 1;
        while (t > 0) {
            sum += t % 10;
            mult *= t % 10;
            t /= 10;
        }
        if(sum == mult) printf("%d ", i);
    }

    return 0;
}
