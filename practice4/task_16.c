#include <stdio.h>

int main(){
    int n1, n2, count = 0;
    scanf("%d", &n1);
    int arr1[n1];
    int *ptr1;

    for(ptr1 = arr1; ptr1 < arr1 + n1; ++ptr1){
        int x;
        scanf("%d", &x);
        *ptr1 = x;
    }

    scanf("%d", &n2);
    int arr2[n2];
    int *ptr2;
    for(ptr2 = arr2; ptr2 < arr2 + n2; ++ptr2){
        int x;
        scanf("%d", &x);
        *ptr2 = x;
    }

    int n;
    if(n1 < n2) n = n1;
    else n = n2;


    ptr1 = arr1;
    ptr2 = arr2;
    while(n > 0){
        printf("\n");
        ptr2++;
        ptr1++;
        n--;
    }
    return 0;
}
