#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b){ printf("a больше \nb меньше"); }
    else if(a < b){ printf("b больше \na меньше"); }
    else { printf("a и b равны"); }
    
    return 0;
}
