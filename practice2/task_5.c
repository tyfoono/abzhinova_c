#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 3) printf("%d\n", i);
        else printf("Fizz\n");
    }

    return 0;
}
