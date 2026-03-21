#include <stdio.h>

//helper fucntion that swaps things
void swap_int(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void revArr(int* num_arr, int n){
    for (int i = 0; i < n / 2; i++) {
        swap_int(&num_arr[i], &num_arr[n - i - 1]);
    }
}




int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    revArr(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}