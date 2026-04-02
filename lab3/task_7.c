#include <stdio.h>
#include <stdlib.h>

struct Student {
    char* name;
    int age;
};

int main(){
    int n;
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}
