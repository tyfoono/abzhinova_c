#include <stdio.h>
#include <limits.h>

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
}

int main(){
    int n, flag = 1;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(flag){
        flag = 0;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i + 1]){
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
                flag = 1;
            }
        }
    }

    
    
    print_array(arr, n);

    
    return 0;
}

