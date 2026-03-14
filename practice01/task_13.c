#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    if( x >= 90 && x <= 100){ printf("Отлично"); } 
    if( x >= 75 && x < 90){ printf("Хорошо"); } 
    if( x >= 60 && x < 75){ printf("Удовлетворительно"); } 
    else { printf("Неудовлетворительно"); } 
    
    return 0;
}
