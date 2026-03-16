#include <stdio.h>

int main() {

    int count = 0, a;

    scanf("%d", &a);
    while(a != 0) {
        count++;
        scanf("%d", &a);
    }

    printf("%d", count);

    return 0;
}
