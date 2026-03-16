#include <stdio.h>

int main() {

    int n, flag = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int t = i;
        while (t > 0) {
            int digit = t % 10;
            if(digit == 3) { flag = 1; break; }
            t /= 10;
        }
        if(flag) { flag = 0; continue; }
        else printf("%d\n", i);
    }

    return 0;
}
