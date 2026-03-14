#include <stdio.h>

int main() {
    float t;

    scanf("%f", &t);

    printf("Kelvin: %.2f \n", t + 273);
    printf("Fahrenheit: %.2f", t * 1.8 + 32);

}
