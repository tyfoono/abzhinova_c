#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int area(struct Rectangle rectangle) { // тут передача значения
    return rectangle.height * rectangle.width;
}

int perimeter(struct Rectangle *rectangle) { // тут передача указателя
    return 2 * rectangle->height + 2 * rectangle->width;
}

int main(){
    struct Rectangle rect = {5, 6};

    printf("area: %d\n", area(rect));
    printf("perimeter: %d", perimeter(&rect));
    return 0;
}
