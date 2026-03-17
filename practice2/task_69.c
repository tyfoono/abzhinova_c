#include <stdio.h>

int main() {

    int n, fact = 1, sum = 0;
    scanf("%d", &n);


    for(int i = 1; i <= n; i++){
        int t = i;
        while (t > 0) {
            for(int j = 1; j <= t % 10; j++) fact *= j;
            sum += fact;
            fact = 1;
            t /= 10;
        }
        if(sum == i) printf("%d\n", i);
        sum = 0;
    }

    return 0;
}
