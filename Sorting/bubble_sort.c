#include <stdio.h>

void bubbleSort(int *unsortedList, int listSize){
    for(int i = 0; i < listSize-1; i++){
        int swapped = 0;
        for(int j = 0; j < listSize-i-1; j++){ //optimzation since i elements will already be sorted
            if (unsortedList[j] > unsortedList[j + 1]) {
                int temp = unsortedList[j];
                unsortedList[j] = unsortedList[j + 1];
                unsortedList[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) return; //optimization for if it is already sorted
    }
}



int main(){
    int unsorted_list[] = {10, 9, 8, 7, 6, 5, 4, 1, 2, 3};
    int n = 10;

    bubbleSort(unsorted_list, n);

    printf("Array: ");

    for(int i = 0; i < n; i++){
        printf("%d ", unsorted_list[i]);
    }
    printf("\n");

    return 0;
}