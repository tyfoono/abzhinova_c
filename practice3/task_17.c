#include <stdio.h>
#include <limits.h>

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
}

int main(){
    int n, sum = 0, max = INT_MIN, max_index = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) { max = arr[i]; max_index = i; }
    }

    for(int i = max_index + 1; i < n; i++) {
        arr[i] = 0;        
    }
    
    print_array(arr, n);

    
    return 0;
}

