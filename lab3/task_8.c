#include <stdio.h>
#include <stdlib.h>


int* add_element(int *arr, int n, int index, int elem) {
    int *res = realloc(arr, (n + 1) * sizeof(int));

    for(int i = n; i > index; i--){
        res[i] = res[i - 1];
    }
    res[index] = elem;

    return res;
}

int* delete_element(int *arr, int n, int index) {
    
    int *res = arr;

    for(int i = index; i < n - 1; i++){
        res[i] = res[i + 1];
    }

    res = realloc(res, (n - 1) * sizeof(int));
    if(res != NULL) return res;
    else return arr;
    
}


void print_array(int *arr, int n){
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int* change_size(int *arr, int s){
    return realloc(arr, s * sizeof(int));
}

int main(){
    int n, choice, e, index, s;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    do{
        printf("\n");
        printf("1. add element\n");
        printf("2. remove element\n");
        printf("3. print array\n");
        printf("4. change size\n");
        printf("15. exit\n");
        printf("\n");

        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("input new value: ");
                scanf("%d", &e);
                printf("input index: ");
                scanf("%d", &index);
                arr = add_element(arr, n, index, e); 
                n++;
                break;

            case 2: 
                printf("input index to delete: ");
                scanf("%d", &index);
                arr = delete_element(arr, n, index);
                n--;
                break;
            case 3: 
                print_array(arr, n);
                break;
            case 4: 
                printf("input new size: ");
                scanf("%d", &s);
                arr = change_size(arr, s);
                n = s;
                break;
            case 5: break;
        }

    } while(choice != 5);

}
