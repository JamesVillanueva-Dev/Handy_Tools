/**
 * Finds the index of the target
 * 
 * @param target thing that is being searched for
 * @param list the list being searched 
 * @param listSize special to c, the size of the list
 * 
 * @return the index of the target in the array or -1 if not found
 */
int linearSearch(int target, int* list, int listSize){
    for (int idx = 0; idx < listSize; idx++){
        if(list[idx] == target){
            return idx;
        }
    }
    return -1;
}
