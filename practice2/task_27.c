#include <stdio.h>

int main() {

    int n, res;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 17 == 0){
            res = i;
            break;
        } 
    }

    printf("%d", res);

    return 0;
}
