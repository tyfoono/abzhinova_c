#include <stdio.h>

int main() {

    int n, k, flag = 0;
    scanf("%d %d", &n, &k);

    int gcd = ((n < k) ? n : k);
    while (gcd > 0) {
        if (n % gcd == 0 && k % gcd == 0) {
            break;
        }
        gcd--;
    }

    if(gcd == 1) printf("%d and %d are mutually prime", n, k);
    else printf("%d and %d are not mutually prime", n, k);

    return 0;
}