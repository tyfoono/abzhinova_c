#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int t = i, seen = 0, two_digit = -1, flag = 1, bit;

        while(t > 0) {
            int digit = t % 10;
            bit = 1 << digit;

            if(seen & bit) {
                if(two_digit == -1) two_digit = digit;
                else if(two_digit != digit) { flag = 0; break; }
            }
            else seen |= bit;

            t /= 10;
        }

        if(flag && two_digit != -1) printf("%d ", i);
    }

    return 0;
}
