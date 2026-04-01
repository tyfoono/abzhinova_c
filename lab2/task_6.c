#include <stdio.h>


enum DataType {
    INT,
    FLOAT,
    CHAR
};

union Data{
    int number;
    float decimal;
    char character;
};

struct Variant {
    enum DataType type;
    union Data value;  
};

void display_variant(struct Variant *var) {
    switch(var->type) {
        case INT:
            printf("int: %d\n", var->value.number);
            break;
        case FLOAT:
            printf("float: %.2f\n", var->value.decimal);
            break;
        case CHAR:
            printf("chat: '%c'\n", var->value.character);
            break;
    }
}

int main(){ 
    union Data data;

    data.decimal = 80.00;
    data.character = 'W';
    data.number = 15;

    printf("%d %.2f %c\n", data.number, data.decimal, data.character);

    struct Variant var;
    var.type = INT;
    var.value.number = 42;

    display_variant(&var);

    return 0;
}
