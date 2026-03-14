#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    if(x % 2 == 0 && x % 3 == 0 && x % 5 == 0){
        printf("%d is divisible by 2, 3 and 5", x);
    } 
    else {
        printf("%d is not divisible by 2, 3 and 5", x);
    }

    return 0;
}
