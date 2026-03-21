#include <stdio.h>
#include <limits.h>

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n], b[n], c[2*n];

    printf("array a\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("array b\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < 2*n; i++){
        if(i % 2) c[i] = b[i % n];
        else c[i] = a[i % n];
    }    
    
    print_array(c, 2 * n);

    
    return 0;
}

