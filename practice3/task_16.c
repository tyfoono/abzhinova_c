#include <stdio.h>
#include <limits.h>

int main(){
    int n, sum = 0, count = 0;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
        sum += arr[i];
    }

    int av = sum/n;

    for(int i = 0; i < n; i++) {
        if(arr[i] > av) count++;
    }

    printf("%d", count);
    
    return 0;
}
