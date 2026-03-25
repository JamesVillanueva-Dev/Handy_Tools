#include "binary_search.h"

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
