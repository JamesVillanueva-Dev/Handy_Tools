#include <stdio.h>

/**
 * Finds the index of the target
 * 
 * @param target thing that is being searched for
 * @param list the list being searched 
 * @param listSize special to c, the size of the list
 * 
 * @return the index of the target in the array or -1 if not found
 */
int binarySearch(int target, int *list, int listSize){
    int low = 0;
    int high = listSize-1;

    while(low <= high){
        int idx = low + (high - low) / 2;
        if(list[idx] == target){
            return idx;
        }
        else if(list[idx] < target){
            low = idx+1;
        }
        else{
            high = idx-1;
        }
    }

    return -1;
}

int main(){
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int target = 8;
    int listSize = 12;
    printf("The index of the value %d in the list is %d\n", target, binarySearch(target, list, listSize));
    return 0;
}