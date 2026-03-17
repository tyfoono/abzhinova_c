#include <math.h>
#include <stdio.h>

int main() {
    int n, sum = 0, k;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int t = i;
        sum = 0;
        k = log10(i) + 1;

        while (t > 0) {
            int digit = t % 10;
            int x = 1;
            for(int j = 0; j < k; j++) x *= digit; 
            sum += x;
            t /= 10;
        }

        if(i == sum) printf("%d\n", i);

    }

    return 0;
}