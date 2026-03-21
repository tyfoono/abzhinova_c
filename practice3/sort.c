#include <stdio.h>

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
}

int partition(int arr[], int less, int more){
    int pointer = arr[more];
    int j = less - 1;

    for(int i = less; i < more; i++){
        if(arr[i] < pointer) {
            j++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }

    int t = arr[j + 1];
    arr[j + 1] = arr[more];
    arr[more] = t;

    return j + 1;
}

void quick_sort(int arr[], int less, int more){
    if(less < more) {
        int pointer = partition(arr, less, more);

        quick_sort(arr, less, pointer - 1);
        quick_sort(arr, pointer + 1, more);
    }
}

int main() {
    int data[] = {1, 2, 3, -1, 5, 7, 0, 100, -100};

    int len = sizeof(data)/sizeof(data[0]);
    printf("before: ");
    print_array(data, len);

    quick_sort(data, 0, len-1);

    printf("\nafter: ");
    print_array(data, len);

    return 0;
}
