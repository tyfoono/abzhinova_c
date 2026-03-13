#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);
    printf("%02d:%02d:%02d", a / 3600, a % 3600 / 60, a % 60);
    
    return 0;
}