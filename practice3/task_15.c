#include <stdio.h>
#include <limits.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n; i += 2) {
        sum += arr[i];
    }
    printf("%d", sum);

    
    return 0;
}
