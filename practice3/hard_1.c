#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    long long max_sum = 0;
    long long sum = 0;
    int start, end, t = 0;

    for(int i = 0; i < n; i++) {

        sum += a[i];
        
        if(sum > max_sum) {
            max_sum = sum;
            start = t;
            end = i;
        }

        
        if(sum < 0 ){
            sum = 0;
            t = i + 1;
        }
    }
    
    printf("\n%d\n", max_sum);
    printf("%d - %d", start, end);

    return 0;
}