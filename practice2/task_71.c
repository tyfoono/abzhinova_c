#include <math.h>
#include <stdio.h>

int main() {
    int n, sum = 0, k;
    scanf("%d", &n);

    int t = n;
    k = log10(t) + 1;

    while (t > 0) {
        int digit = t % 10;
        int i = 1;
        for(int j = 0; j < k; j++) { i *= digit; }
        sum += i;
        t /= 10;
    }

    if (sum == n) printf("%d is an armstrong number", n);
    else printf("%d is not an armstrong number", n);

    return 0;
}