#include "../binary_search/binary_search.h"

/**
 * Finds the index of the target
 * 
 * @param target thing that is being searched for
 * @param list the list being searched 
 * @param listSize special to c, the size of the list
 * 
 * @return the index of the target in the array or -1 if not found
 */
int expSearch(int target, int *list, int listSize){
    
    if(list[0] == target) return 0;

    int i = 1;

    while(i < listSize && list[i] <= target){
        i *= 2;
    }

    int offset = i/2;

    int result = binarySearch(target, list + offset, listSize - offset);

    if (result == -1){
        return -1;
    }
    else{
        return result + offset;
    }
}
